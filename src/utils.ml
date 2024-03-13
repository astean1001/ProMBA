(***********************************************************************)
(*                                                                     *)
(* Copyright (c) 2022-Present.                                         *)
(* Programming System Laboratory (PSL), Hanyang University.            *)
(* All rights reserved.                                                *)
(*                                                                     *)
(* This software is distributed under the term of the BSD license.     *)
(* See the LICENSE file for details.                                   *)
(*                                                                     *)
(***********************************************************************)

exception BadRule

let debug_out = ref stderr 
let _ = Random.init (int_of_float (Unix.time ()))
let sygus_dir = "sl_files/"
let smt_dir = "smt_files/"
let log_dir = "log_files/"
let sygus_file = "sygus_problem.sl"
let sygus_file2 = "sygus_problem2.sl"
let smt_file = "smt_eval.smt"
let logfile = "sygus_solve.log"
let errfile = "sygus_solve.err"
let logfile2 = "sygus_check.log"
let errfile2 = "sygus_check.err"
let smtlog = "smt_eval.log"
let smterr = "smt_eval.err"

let linear_file = "linear_solve.log"
let linear_err = "linear_solve.err"

let generated_cfile = "target.c"

let bitvec_length c =
  if c <= (int_of_float (2. ** 5.)) then "8"
  else if c <= (int_of_float (2. ** 9.)) then "12"
  else if c <= (int_of_float (2. ** 13.)) then "16"
  else if c <= (int_of_float (2. ** 17.)) then "24"
  else if c <= (int_of_float (2. ** 25.)) then "32"
  else "64"

let bitvec_of_int c = if c = (-1) then "#xffffffffffffffff" else Printf.sprintf "#x%016x" c

let bitvec_n_of_int n c = 
  if n = "4" then Printf.sprintf "#x%01x" c
  else if n = "8" then Printf.sprintf "#x%02x" c
  else if n = "12" then Printf.sprintf "#x%03x" c
  else if n = "16" then Printf.sprintf "#x%04x" c
  else if n = "24" then  Printf.sprintf "#x%06x" c
  else if n = "32" then  Printf.sprintf "#x%08x" c
  else  Printf.sprintf "#x%016x" c

let time_of_string _ = 
  let time = Unix.time () in
  let { 
    Unix.tm_sec=seconds; 
    tm_min=minutes; 
    tm_hour=hours;
    tm_mday=day_of_month;
    tm_mon=month; 
    tm_year=year;
    tm_wday=wday; 
    tm_yday=yday; 
    tm_isdst=isdst
  } = Unix.localtime time in
  Printf.sprintf "%04d-%02d-%02d %02d:%02d:%02d" (year + 1900) (month + 1) day_of_month hours minutes seconds
    
(** we copy all debugging output to a file and to stdout *)
let debug fmt = 
  let k result = begin
      output_string !debug_out ("[" ^ (time_of_string ()) ^ "] " ^ result) ; 
      (* output_string stdout result ;  *)
      (* flush stdout ;  *)
      flush !debug_out;
  end in
   if !Options.debug then Printf.kprintf k fmt else ()

let parse_mba str = 
  let lexbuf = Lexing.from_string str in
  let result = MBAParser.main MBALexer.token lexbuf in
  result  

let rec string_of_list f l =
  match l with
  | [] -> "\n"
  | hd :: tl -> (f hd) ^ ";" ^ (string_of_list f tl)

let choice l = 
  let randint = (Random.int (List.length l)) in
  List.nth l randint

let string_in sub str =
  try
    let _ = Str.search_forward (Str.regexp sub) str 0 in  
    true 
  with _ -> false 

let get_lines filename =
  try  
    let fin = open_in filename in
    let res = ref [] in
      (try
         while true do
           res := (input_line fin) :: !res
         done
       with End_of_file -> close_in fin);
      List.rev !res
  with _ -> [] 

let string_to_file file contents =
  let fout = open_out file in
  output_string fout contents;
  close_out fout

let to_simplify_file expr varset =
    let declare_str = BatSet.fold (fun elem str -> str ^ "(declare-const " ^ elem ^ " (_ BitVec 64))\n") varset ""  in
    let smt = (Printf.sprintf"%s
(simplify %s)" declare_str expr) in
    string_to_file (smt_dir ^ !Options.runid ^ smt_file) smt
  
let to_smt_file left_expr right_expr varset nbit =
  let declare_str = BatSet.fold (fun elem str -> str ^ "(declare-const " ^ elem ^ " (_ BitVec "^nbit^"))\n") varset ""  in
  let smt = (Printf.sprintf"%s
(assert (not (= %s %s)))
(check-sat)" declare_str (Expr.sygus_of_expr_nbit left_expr nbit) (Expr.sygus_of_expr_nbit right_expr nbit)) in
  string_to_file (smt_dir ^ !Options.runid ^ smt_file) smt

let to_sygus_pbe_file valuations varset = 
  let param_str = BatSet.fold (fun elem str -> str ^ " (" ^ elem ^ " (BitVec 64))") varset "" in
  let var_str = BatSet.fold (fun elem str -> str ^ " " ^ elem ) varset "" in
  let constset = BatSet.of_list (List.map (fun (bm, i) -> i) valuations) in
  let const_str = BatSet.fold (fun elem str -> str ^ " " ^ (bitvec_of_int elem) ) constset "" in
  let declare_str = BatSet.fold (fun elem str -> str ^ "(declare-var " ^ elem ^ " (BitVec 64))\n") varset ""  in
  let constraints = List.fold_left (fun s (vs, i) -> 
    "(constraint (= (deobfucated " ^ (BatSet.fold (fun elem str -> str ^ " " ^ (bitvec_of_int (BatMap.find elem vs))) varset "") ^ ") " ^ (bitvec_of_int i) ^ "))\n" ^ s) "" valuations in
  let linear_grammar = (Printf.sprintf "(Start (BitVec 64)
        (
          (bvadd Start Start)
          (bvsub Start Start)
          (bvmul Constant BoolExpr)
          BoolExpr
          Constant
        )
      )
      (BoolExpr (BitVec 64) 
        (
          (bvxor BoolExpr BoolExpr)
          (bvand BoolExpr BoolExpr)
          (bvor BoolExpr BoolExpr)
          (bvnot BoolExpr)
          %s
        )
      )
      (Constant (BitVec 64)
        (
          %s
        )
      )" var_str const_str)
  in
  let sygus = (Printf.sprintf "(set-logic BV)

(synth-fun deobfucated ( %s ) (BitVec 64)
  (
    %s
  )
)

%s
%s
(check-synth)"
    param_str linear_grammar declare_str constraints)
  in
  let _ = string_to_file (sygus_dir ^ !Options.runid ^ sygus_file2) sygus in
  string_to_file (sygus_dir ^ !Options.runid ^ sygus_file) sygus

let base_const = BatSet.of_list [0;1;2;4;8]

let to_sygus_file expr varset constset linear = 
  let expr_refine = if Expr.size_of_expr expr = 1 then Expr.BExpr (Expr.Add, expr, Expr.Constant(0)) else expr in
  let varset = if BatSet.is_empty varset then BatSet.add "some_var" varset else varset in
  let nbit = if not linear then "64" else try bitvec_length (BatSet.max_elt constset) with _ -> "4" in
  let param_str = BatSet.fold (fun elem str -> str ^ " (" ^ elem ^ " (BitVec "^nbit^"))") varset "" in
  let var_str = BatSet.fold (fun elem str -> str ^ " " ^ elem ) varset "" in
  let const_str = BatSet.fold (fun elem str -> str ^ " " ^ (bitvec_n_of_int nbit elem) ) (BatSet.union constset base_const) "" in
  let declare_str = BatSet.fold (fun elem str -> str ^ "(declare-var " ^ elem ^ " (BitVec "^nbit^"))\n") varset ""  in
  let linear_grammar = (Printf.sprintf "(Start (BitVec %s)
        (
          (bvadd Start Start)
          (bvmul Constant BoolExpr)
          (bvsub Start Start)
          BoolExpr
          Constant
        )
      )
      (BoolExpr (BitVec %s) 
        (
          (bvxor BoolExpr BoolExpr)
          (bvand BoolExpr BoolExpr)
          (bvor BoolExpr BoolExpr)
          (bvnot BoolExpr)
          (bvneg BoolExpr)
          Constant
          %s
        )
      )
      (Constant (BitVec %s)
        (
          (bvadd Constant Constant)
          (bvsub Constant Constant)
          (bvmul Constant Constant)
          %s
        )
      )" nbit nbit var_str nbit const_str)
  in
  let full_grammar = (Printf.sprintf "(Start (BitVec %s)
        (
          (bvnot Start)
          (bvxor Start Start)
          (bvand Start Start)
          (bvor Start Start)
          (bvneg Start)
          (bvadd Start Start)
          (bvmul Start Start)
          (bvsub Start Start)
          (bvshl Start Start)
          (bvsdiv Start Constant)
          (bvsrem Start Constant)
          (bvlshr Start Start)
          %s
          %s
        )
      )
      (Constant (BitVec %s)
        (
          (bvnot Constant)
          (bvxor Constant Constant)
          (bvand Constant Constant)
          (bvor Constant Constant)
          (bvneg Constant)
          (bvadd Constant Constant)
          (bvmul Constant Constant)
          (bvsub Constant Constant)
          (bvshl Constant Constant)
          (bvsdiv Constant Constant)
          (bvsrem Constant Constant)
          (bvlshr Constant Constant)
          %s
        )
      )" nbit var_str const_str nbit const_str )
  in
  let sygus = (Printf.sprintf "(set-logic BV)
(define-fun obfucated ( %s ) (BitVec %s) 
  %s
)

(synth-fun deobfucated ( %s ) (BitVec %s)
  (
    %s
  )
)

%s
(constraint (= (obfucated %s) (deobfucated %s)))
(check-synth)"
    param_str nbit (Expr.sygus_of_expr_nbit expr_refine nbit) param_str nbit 
    (if linear then linear_grammar else full_grammar) declare_str var_str var_str)
  in
  let _ = string_to_file (sygus_dir ^ !Options.runid ^ sygus_file2) sygus in
  string_to_file (sygus_dir ^ !Options.runid ^ sygus_file) sygus

let ask_smt t =
  let stdout_log =
    let filename = (log_dir ^ !Options.runid ^ smtlog) in 
    let _ = try Unix.unlink filename with _ -> () in 
    Unix.openfile filename [Unix.O_CREAT; Unix.O_WRONLY] 0o640  
  in
  let stderr_log =
    let filename = (log_dir ^ !Options.runid ^ smterr) in 
    let _ = try Unix.unlink filename with _ -> () in 
    Unix.openfile filename [Unix.O_CREAT; Unix.O_WRONLY] 0o640  
  in
  let child_pid = 
    Unix.create_process "timeout" [|"timeout"; (string_of_float !Options.timeout_smt); !Options.smt; (smt_dir ^ !Options.runid ^ smt_file)|] 
      Unix.stdin stdout_log stderr_log 
  in
  let _ = Unix.close stdout_log in 
  let _ = Unix.close stderr_log in
  let _ = match snd (Unix.waitpid [] child_pid) with
    | Unix.WEXITED 0 -> true
    | _ -> false
  in
  let err_lines = get_lines (log_dir ^ !Options.runid ^ smterr) in
  let out_lines = get_lines (log_dir ^ !Options.runid ^ smtlog) in
  let lines = err_lines @ out_lines in 
  let sol =
    ((List.exists (fun line -> string_in "unsat" line) lines) || t) && 
    (List.length out_lines) > 0 
  in
  sol  

let rec list_to_pairlist l res =
  match l with
  | e1 :: e2 :: [] -> 
    let lrule = (parse_mba e1) in
    let rrule = (parse_mba e2) in
    (* if (Expr.size_of_expr lrule) == (Expr.size_of_expr rrule) then res else  *)
    if (Expr.size_of_expr lrule) < (Expr.size_of_expr rrule) then res
    else BatSet.add (lrule, rrule) res
  | e1 :: e2 :: tl -> 
    let lrule = (parse_mba e1) in
    let rrule = (parse_mba e2) in
    let res' = 
      (* if (Expr.size_of_expr lrule) == (Expr.size_of_expr rrule) then res else  *)
      if (Expr.size_of_expr lrule) < (Expr.size_of_expr rrule) then res
      else BatSet.add (lrule, rrule) res in
    list_to_pairlist tl res'
  | _ -> raise BadRule

let load_exprs file = 
  let rulelines = get_lines file in
  List.map (fun se -> parse_mba se) rulelines

let load_rules file = 
  let rulelines = get_lines file in
  list_to_pairlist rulelines BatSet.empty

let solve t = 
  let stdout_log =
    let filename = (log_dir ^ !Options.runid ^ logfile) in 
    let _ = try Unix.unlink filename with _ -> () in 
    Unix.openfile filename [Unix.O_CREAT; Unix.O_WRONLY] 0o640  
  in
  let stderr_log =
    let filename = (log_dir ^ !Options.runid ^ errfile) in 
    let _ = try Unix.unlink filename with _ -> () in 
    Unix.openfile filename [Unix.O_CREAT; Unix.O_WRONLY] 0o640  
  in
  let child_pid = 
    Unix.create_process "timeout" [|"timeout"; (string_of_float !Options.timeout_sygus); !Options.sygus; (sygus_dir ^ !Options.runid ^ sygus_file); (if !Options.runid_tosynth then !Options.runid else "") |] 
      Unix.stdin stdout_log stderr_log 
  in
  let _ = Unix.close stdout_log in 
  let _ = Unix.close stderr_log in
  let _ = match snd (Unix.waitpid [] child_pid) with
    | Unix.WEXITED 0 -> true
    | _ -> false
  in
  let err_lines = get_lines (log_dir ^ !Options.runid ^ errfile) in
  let out_lines = get_lines (log_dir ^ !Options.runid ^ logfile) in
  let lines = err_lines @ out_lines in 
  if (List.exists (fun line -> string_in "line 190" line) lines) || 
    (List.exists (fun line -> string_in "SolutionFound" line) lines) then 2
  else
    if (List.exists (fun line -> string_in "fail" line) lines) ||
      (List.exists (fun line -> string_in "error" line) lines) then 1
  else if (List.length out_lines) = 0 then 3 else 0

let check t = 
  if !Options.synth2 = "" then false
  else
  let stdout_log =
    let filename = (log_dir ^ !Options.runid ^ logfile2) in 
    let _ = try Unix.unlink filename with _ -> () in 
    Unix.openfile filename [Unix.O_CREAT; Unix.O_WRONLY] 0o640  
  in
  let stderr_log =
    let filename = (log_dir ^ !Options.runid ^ errfile2) in 
    let _ = try Unix.unlink filename with _ -> () in 
    Unix.openfile filename [Unix.O_CREAT; Unix.O_WRONLY] 0o640  
  in
  let child_pid = 
    Unix.create_process "timeout" [|"timeout"; (string_of_float !Options.timeout_sygus); !Options.synth2; (sygus_dir ^ !Options.runid ^ sygus_file2); !Options.runid|] 
      Unix.stdin stdout_log stderr_log 
  in
  let _ = Unix.close stdout_log in 
  let _ = Unix.close stderr_log in
  let _ = match snd (Unix.waitpid [] child_pid) with
    | Unix.WEXITED 0 -> true
    | _ -> false
  in
  let err_lines = get_lines (log_dir ^ !Options.runid ^ errfile2) in
  let out_lines = get_lines (log_dir ^ !Options.runid ^ logfile2) in
  let lines = err_lines @ out_lines in 
  let no_sol =
    (List.exists (fun line -> string_in "fail" line) lines) || 
    (List.exists (fun line -> string_in "line" line) lines) || 
    (List.exists (fun line -> string_in "error" line) lines) ||
    (List.length out_lines) = 0 
  in
  not no_sol

let run_lsolver expr etcstr = 
  if !Options.lsolver = "" then false
  else
  let stdout_log =
    let filename = (log_dir ^ !Options.runid ^ linear_file) in 
    let _ = try Unix.unlink filename with _ -> () in 
    Unix.openfile filename [Unix.O_CREAT; Unix.O_WRONLY] 0o640  
  in
  let stderr_log =
    let filename = (log_dir ^ !Options.runid ^ linear_err) in 
    let _ = try Unix.unlink filename with _ -> () in 
    Unix.openfile filename [Unix.O_CREAT; Unix.O_WRONLY] 0o640  
  in
  let child_pid = 
    Unix.create_process "timeout" [|"timeout"; (string_of_float !Options.timeout_sygus); (!Options.lsolver ^ etcstr ); (expr)|] 
      Unix.stdin stdout_log stderr_log 
  in
  let _ = Unix.close stdout_log in 
  let _ = Unix.close stderr_log in
  let _ = match snd (Unix.waitpid [] child_pid) with
    | Unix.WEXITED 0 -> true
    | _ -> false
  in
  let err_lines = get_lines (log_dir ^ !Options.runid ^ linear_err) in
  let out_lines = get_lines (log_dir ^ !Options.runid ^ linear_file) in
  let lines = err_lines @ out_lines in 
  let no_sol =
    (List.exists (fun line -> string_in "Error" line) lines) || 
    (List.exists (fun line -> string_in "line" line) lines) || 
    (List.exists (fun line -> string_in "error" line) lines) ||
    (List.length out_lines) = 0 
  in
  not no_sol

let parse_linear t = 
  let inc = open_in (log_dir ^ !Options.runid ^ linear_file) in 
  let lexbuf = Lexing.from_channel inc in
  let result = MBAParser.main MBALexer.token lexbuf in
  let _ = close_in inc in
  result  

let parse_sygus t =
  let inc = open_in (log_dir ^ !Options.runid ^ (if t then logfile else logfile2)) in 
  let lexbuf = Lexing.from_channel inc in
  let result = SygusParser.main SygusLexer.token lexbuf in
  let _ = close_in inc in
  result  

let parse_simplify t =
  let inc = open_in (log_dir ^ !Options.runid ^ smtlog) in 
  let lexbuf = Lexing.from_channel inc in
  let result = SimplifyParser.main SimplifyLexer.token lexbuf in
  let _ = close_in inc in
  result  

let get_smallest s = 
  BatSet.fold (fun se small -> if (Expr.size_of_expr se) < (Expr.size_of_expr small) then se else small) s (BatSet.any s)