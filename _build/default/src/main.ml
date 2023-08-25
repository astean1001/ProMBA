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

open Yojson
open Utils
open Expr
open Cil

let src_file = ref ""

let args : string -> unit = fun f ->
	if Sys.file_exists f then
		if Filename.check_suffix f ".c" then src_file := f
		else
			let _ = debug "Error: %s - DSynth only accepts C file" f in
			exit 1
	else
		let _ = debug "Error: %s - File not exists!" f in
		exit 1

let get_all_problems file =
	let json = Basic.from_file file in
	let problems = match json with
		| `Assoc l -> List.fold_left (fun m elem ->
				match elem with
				| (s, `List p) -> 
					(match (List.nth p 1) with
						| `String prob -> BatMap.add s prob m
						| _ -> let _ = debug "Malformed JSON File!" in BatMap.empty)
				| _ -> let _ = debug "Malformed JSON File!" in BatMap.empty
			) BatMap.empty l
		| _ -> let _ = debug "Malformed JSON File!" in BatMap.empty
 	in
 	problems

let rec solve_problem problem ruleset =
	let nodelist = list_of_expr problem in
	let choiced = choice nodelist in
	let choiced_expr = (expr_of_addr problem choiced) in
	let limited, varmap, revmap = (limit choiced_expr 4) in
	let _ = debug "Orig Expr: %s\n" (string_of_expr problem)  in
	let _ = debug "Selected Expr: %s\n" (string_of_expr limited) in
	if BatSet.is_empty (set_of_var limited) then solve_problem problem ruleset
	else 
		let _ = to_sygus_file (sygus_of_expr limited) (set_of_var limited) (set_of_const limited) in
		let success = solve true in
		if success then 
			let sol = (substitute (parse_sygus true) varmap) in
			let _ = debug "Deobfuscate Sucessful!\n" in
			let _ = debug "Replaced : %s -> %s\n" (string_of_expr limited) (string_of_expr (parse_sygus true)) in
			let ruleset' = add_rule limited (parse_sygus true) ruleset in
			let _ = BatSet.iter (fun e -> debug "rule : %s -> %s\n" (string_of_expr (fst e)) (string_of_expr (snd e))) ruleset' in
			let applyed = apply_rules (replace problem sol choiced) ruleset' in
			let _ = debug "Deobfuscation Result: %s\n" (string_of_expr applyed) in
			if equal_expr applyed problem && not (equal_expr sol choiced_expr) then applyed else solve_problem applyed ruleset'
	 	else 
	 		let _ = debug "Timeout or Error Occurred!\n" in
	 		solve_problem problem ruleset

(* let deobfuscate probinfo = *)
	(* Translate each problem into SyGuS and Solve *)
(* 	|> expr_to_sygus *)
	(* If timed out, drop the problem and proceed to next one *)
(* 	|> solve *)

(* 
	DSynth : Binary Code Deobfuscation with DUET
	Assumption :
		i)   Function name with prefix "target_" is considered as deobfuscation problem
*)
let main () =  
	(* Parse all options *)
	Arg.parse Options.options args "";
	(* Get All problems. Each function is synthesis problem *)
	let cil = parse_one_file !src_file in
	let _ = BatMap.iter (fun k v -> 
		let _ = debug "Solving Problem: %s\n" k in
 		let _ = solve_problem (Expr.expr_of_cil v) BatSet.empty in raise BadCode
 	) !CilHelper.problemSet in ()
	(* let problems = get_all_problems !src_file in *)
	(* let _ = if !Options.debug then BatMap.iter (fun k v -> 
		let _ = debug "Current Problem: %s\n" k in
 		let _ = solve_problem (parse_mba v) BatSet.empty in raise BadCode
 	) problems in () *)

let _ = main ()
(* 	|> deobfuscate *)