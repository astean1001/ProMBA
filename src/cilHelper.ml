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

open Cil

let debug_out = ref stderr 

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
   Printf.kprintf k fmt


let problemSet = ref BatMap.empty
(* let get_func_name func_info = func_info.vname
let get_return_expr
let get_all_lval
let substitute_lval
let substitute_func *)

let tostring s = Escape.escape_string (Pretty.sprint 0 s)

let rec s_exps : exp list -> string = fun es -> ""
(*   string_of_list ~first:"(" ~last:")" ~sep:", " s_exp es *)

and s_global: global -> string = fun g ->  
	tostring (d_global () g) 

and s_exp : exp -> string = function
  | Const c -> s_const c
  | Lval l -> s_lv l
  | SizeOf t -> "SizeOf(" ^ s_type t ^ ")"
  | SizeOfE e -> "SizeOfE(" ^ s_exp e ^ ")"
  | SizeOfStr s -> "SizeOfStr(" ^ s ^ ")"
  | AlignOf t -> "AlignOf(" ^ s_type t ^ ")"
  | AlignOfE e -> "AlignOfE(" ^ s_exp e ^ ")"
  | UnOp (u, e, _) -> s_uop u ^ s_exp_paren e
  | BinOp (b, e1, e2, _) -> s_exp_paren e1 ^ s_bop b ^ s_exp_paren e2
  | Question (c, e1, e2, _) ->
    s_exp_paren c ^ " ? " ^ s_exp_paren e1 ^ " : " ^ s_exp_paren e2
  | CastE (t, e) -> "(" ^ s_type t ^ ")" ^ s_exp_paren e
  | AddrOf l -> "&" ^ s_lv l
  | AddrOfLabel _ -> invalid_arg "AddrOfLabel is not supported."
  | StartOf l -> "StartOf(" ^ s_lv l ^ ")"

and s_exp_paren : exp -> string
= fun e ->
  match e with
  | UnOp _ | BinOp _ | Question _ | CastE _ -> "(" ^ s_exp e ^ ")"
  | _ -> s_exp e

and s_const : constant -> string
=fun c -> tostring (d_const () c)

and s_label l = tostring (d_label () l)

and s_type : typ -> string
=fun typ -> tostring (d_type () typ)

and s_stmt : stmt -> string
= fun s -> tostring (d_stmt () s)

and s_block b = tostring (d_block () b)

and s_lv : lval -> string = fun (lh, offset) ->
  s_lhost lh ^ s_offset offset

and s_lhost : lhost -> string = function
  | Var vi -> (if vi.vglob then "@" else "") ^ vi.vname
  | Mem e -> "*" ^ s_exp_paren2 e

and s_exp_paren2 : exp -> string
= fun e ->
  match e with
  | Lval (_, NoOffset) -> s_exp e
  | Lval _ | UnOp _ | BinOp _ | Question _ | CastE _ -> "(" ^ s_exp e ^ ")"
  | _ -> s_exp e

and s_offset : offset -> string = function
  | NoOffset -> ""
  | Field (fi, offset) -> "." ^ fi.fname ^ s_offset offset
  | Index (e, offset) -> "[" ^ s_exp e ^ "]" ^ s_offset offset

and s_uop u = tostring (d_unop () u)

and s_bop b = tostring (d_binop () b)

and s_instr : instr -> string
=fun i ->
  match i with
  | Set (lv,exp,_) -> "Set(" ^ s_lv lv ^ "," ^ s_exp exp ^ ")"
  | Call (Some lv,fexp,params,_) ->
      s_lv lv ^ ":= Call(" ^ s_exp fexp ^ s_exps params ^ ")"
  | Call (None,fexp,params,_) ->
      "Call(" ^ s_exp fexp ^ s_exps params ^ ")"
  | Asm _ -> "Asm"

and s_instrs : instr list -> string
=fun instrs ->
  List.fold_left (fun s i -> s ^ s_instr i) "" instrs

let s_location : location -> string
=fun loc ->
  let file = try
    let idx = String.rindex loc.file '/' in
    let len = String.length loc.file in
      String.sub loc.file (idx+1) (len-idx-1)
    with _ -> loc.file
  in file ^ ":" ^ string_of_int loc.line


let is_problem s = 
	try 
		ignore (BatString.find s "target_"); true 
	with Not_found -> false

let extract o =
  match o with
  | Some i -> i
  | None -> let _ = debug "extract: Option extraction failed!\n" in assert false

let get_ret_expr stmts =
	let retlist = List.filter (fun stmt -> 
		let sk = stmt.skind in
		match sk with
		| Return (_, _) -> true
		| _ -> false
	) stmts in
	(* let _ = debug "get_ret_expr: number of stmts %d\n" (List.length stmts) in *)
	if List.length retlist < 1 then 
		let _ = debug "get_ret_expr: There is no return function in this problem!\n" in
		assert false
	else
		let found = List.hd retlist in
		match found.skind with
		| Return (exp, _) -> (extract exp)
		| _ -> let _ = debug "get_ret_expr: Return value is empty!\n" in assert false


class problemVisitor = object(self)
	inherit nopCilVisitor
	method vfunc fd =
		(* Assumption : each problem is C function starts with target *)
		if (is_problem fd.svar.vname) 
		then
			(* let _ = debug "problemVisitor: Target func name - %s\n" fd.svar.vname in *)
			let _ = problemSet := (BatMap.add fd.svar.vname (get_ret_expr fd.sbody.bstmts) !problemSet) in
			DoChildren
		else DoChildren
end

let parse_one_file fname =
	let _ = (debug "Parsing File: %s\n" fname) in
	let cil = Frontc.parse fname () in
	Rmtmps.removeUnusedTemps cil;
	ignore(Cil.visitCilFile (new problemVisitor) cil);
	cil

