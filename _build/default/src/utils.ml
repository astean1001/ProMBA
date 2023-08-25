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

let debug_out = ref stderr 
let _ = Random.init (int_of_float (Unix.time ()))
let sygus_file = "sygus_problem.sl"
let logfile = "sygus_solve.log"
let errfile = "sygus_solve.err"

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

let to_sygus_file expr_str varset constset = 
  let param_str = BatSet.fold (fun elem str -> str ^ " (" ^ elem ^ " (BitVec 64))") varset "" in
  let var_str = BatSet.fold (fun elem str -> str ^ " " ^ elem ) varset "" in
  let const_str = BatSet.fold (fun elem str -> str ^ " " ^ (Expr.bitvec_of_int elem) ) constset "" in
  let declare_str = BatSet.fold (fun elem str -> str ^ "(declare-var " ^ elem ^ " (BitVec 64))\n") varset ""  in
  let sygus = (Printf.sprintf "(set-logic BV)
(define-fun obfucated ( %s ) (BitVec 64) 
  %s
)

(synth-fun deobfucated ( %s ) (BitVec 64)
  (
    (Start (BitVec 64)
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
        %s
        %s
        #x0000000000000001
        #x0000000000000000
      )
    )
  )
)

%s
(constraint (= (obfucated %s) (deobfucated %s)))
(check-synth)"
    param_str expr_str param_str 
    var_str const_str declare_str var_str var_str)
  in
  string_to_file sygus_file sygus

let solve t = 
  let stdout_log =
    let filename = logfile in 
    let _ = try Unix.unlink filename with _ -> () in 
    Unix.openfile filename [Unix.O_CREAT; Unix.O_WRONLY] 0o640  
  in
  let stderr_log =
    let filename = errfile in 
    let _ = try Unix.unlink filename with _ -> () in 
    Unix.openfile filename [Unix.O_CREAT; Unix.O_WRONLY] 0o640  
  in
  let child_pid = 
    Unix.create_process "timeout" [|"timeout"; (string_of_float !Options.timeout_sygus); !Options.sygus; sygus_file|] 
      Unix.stdin stdout_log stderr_log 
  in
  let _ = Unix.close stdout_log in 
  let _ = Unix.close stderr_log in
  let _ = match snd (Unix.waitpid [] child_pid) with
    | Unix.WEXITED 0 -> true
    | _ -> false
  in
  let err_lines = get_lines errfile in
  let out_lines = get_lines logfile in
  let lines = err_lines @ out_lines in 
  let no_sol =
    (List.exists (fun line -> string_in "fail" line) lines) || 
    (List.exists (fun line -> string_in "Failure" line) lines) ||
    (List.length out_lines) = 0 
  in
  not no_sol 

let parse_sygus t =
  let inc = open_in logfile in 
  let lexbuf = Lexing.from_channel inc in
  let result = SygusParser.main SygusLexer.token lexbuf in
  let _ = close_in inc in
  result  