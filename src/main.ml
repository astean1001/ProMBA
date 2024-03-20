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
open Mbablast

exception NotImplemented
let src_file = ref ""
let result = ref BatMap.empty
let reduced_info = ref BatMap.empty
let alter_rulecount = ref BatMap.empty

let args : string -> unit = fun f ->
	if !Options.mbaOnly then
		src_file := f
	else if Sys.file_exists f then
		if Filename.check_suffix f ".c" then src_file := f
		else
			let _ = debug "Error: %s - DSynth only accepts .c file\n" f in
			exit 1
	else
		let _ = debug "Error: %s - File not exists!\n" f in
		exit 1

let get_all_problems file =
	let json = Basic.from_file file in
	let problems = match json with
		| `Assoc l -> List.fold_left (fun m elem ->
				match elem with
				| (s, `List p) -> 
					(match (List.nth p 1) with
						| `String prob -> BatMap.add s prob m
						| _ -> let _ = debug "Malformed JSON File!\n" in BatMap.empty)
				| _ -> let _ = debug "Malformed JSON File!\n" in BatMap.empty
			) BatMap.empty l
		| _ -> let _ = debug "Malformed JSON File!\n" in BatMap.empty
 	in
 	problems

let rec normalize l r =
	(* Get list of all sub expression of left side of rule  (except of constant and variable) *)
	let lset = get_all_subexpr l BatSet.empty in
	let rec is_appliable subexpr rside = 
		if equal_expr subexpr rside then true
		else 
			match rside with 
			| BExpr (b, e1, e2) -> 
				let result = is_appliable subexpr e1 in
				let result2 = is_appliable subexpr e2 in
				result || result2
			| UExpr (u, e1) -> is_appliable subexpr e1
			| _ -> false
	in
	let rec replace_subexpr subexpr origexpr replacement = 
		if equal_expr subexpr origexpr then replacement
		else 
			match origexpr with 
			| BExpr (b, e1, e2) -> 
				let result = replace_subexpr subexpr e1 replacement in
				let result2 = replace_subexpr subexpr e2 replacement in
				BExpr (b, result, result2)
			| UExpr (u, e1) -> UExpr (u, replace_subexpr subexpr e1 replacement) 
			| _ -> origexpr
	in
	let (newl, newr, _) = BatSet.fold (fun expr (l', r', cnt) -> 
		if is_var_or_constant expr then (l', r', cnt)
		else 
			if is_appliable expr r' then (* Find normalizable subexpr *)
				(* Apply it *)
				let repl = replace_subexpr expr l' (Var ("tmp"^(string_of_int cnt))) in
				let repr = replace_subexpr expr r' (Var ("tmp"^(string_of_int cnt))) in
				let constset = BatSet.union (set_of_const repl) (set_of_const repr) in
				(* Ask SMT whether left and right side are semantically equivalent *)
				let _ = Utils.to_smt_file repl repr (BatSet.union (set_of_var repl) (set_of_var repr)) (Utils.bitvec_length (try (BatSet.max_elt constset) with _ -> 0) ) in
				if Utils.ask_smt false then
					(repl, repr, cnt+1)
				else 
					(l', r', cnt)
			else (l', r', cnt)
	) lset (l,r,0)
	in
	(* Repeat it until all sub expression cannot be changed *)
	if equal_expr newl l then (l, r) else normalize newl newr
	
let normalize_rules ruleset = 
	BatSet.map (fun rule -> normalize (fst rule) (snd rule)) ruleset

let solve_pbe problem = 
	let expr = BExpr(Plus, Var "x", Var "y") in
	let inputs = BatMap.add "x" 1 BatMap.empty in
	let inputs = BatMap.add "y" 2 inputs in
	let result = Unsigned.UInt64.to_int (evaluate expr inputs) in
	let _ = debug "Expr : %s\n" (string_of_expr expr) in
	let _ = debug "Evaluation Result : %d\n" result in
	(* Generate random input with Random.int64 *)
	(* Generate set of input-output example of expr *)
	(* Evaluate it with Expr.evaluate *)
	(* Form SyGuS problem and solve it *)
	raise NotImplemented

let rec solve_mbasolve probname problem start_time failed =
	let current = Unix.time () in
	let problem = eliminate_coefficient_one (replace_not_zero_to_minus_one problem) in
	let nodeset = get_all_subexpr problem (BatSet.add problem BatSet.empty) in
	let _ = if BatMap.mem probname !reduced_info then () else reduced_info := BatMap.add probname ((size_of_expr problem), (0,0)) !reduced_info in
	if (BatSet.cardinal nodeset) < 2 then 
		let _ = debug "Answer Found :: %s \n" (string_of_expr problem) in
		let _ = result := BatMap.add probname ((current -. start_time), problem) !result in
		problem
	else
		let nodeset_diff = BatSet.diff nodeset failed in
		if BatSet.is_empty nodeset_diff  then 
			let _ =  debug "All Node Failed! Final Answer :: %s \n" (string_of_expr problem)  in
			let _ =  debug "Deobfuscation Result: %s\n" (sygus_of_expr problem) in 
			let _ = result := BatMap.add probname ((current -. start_time), problem) !result in
			problem
		else 
			let choiced_expr = get_largest_expr nodeset_diff in
			let _ = debug "Orig Expr: %s\n" (string_of_expr problem) in
			let _ = debug "Size of Orig Expr: %d\n" (size_of_expr problem) in
			let _ = debug "Selected Expr: %s\n" (string_of_expr choiced_expr) in
			let (succ, res) = mbasolver choiced_expr in
			if succ then 
				let _ = debug "MBA-Solver succeed to reduce this subterm!\n" in
				let _ = debug "Replaced : %s -> %s\n" (string_of_expr choiced_expr) (string_of_expr res) in
				let applied = (replace_expr problem res choiced_expr) in
				if (size_of_expr applied) < (size_of_expr problem) then
					solve_mbasolve probname applied start_time failed
				else
					let _ = debug "MBA-Solver failed to reduce this subterm! - reverting...\n" in
					let failed' = BatSet.add choiced_expr failed in
					solve_mbasolve probname problem start_time failed'
			else
				let _ = debug "MBA-Solver is not applicable to this subterm!\n" in
				let failed' = BatSet.add choiced_expr failed in
				solve_mbasolve probname problem start_time failed'

let rec solve_blast probname problem start_time failed logmode =	
	let current = Unix.time () in
	let problem = replace_not_zero_to_minus_one problem in
	let nodelist = list_of_expr problem in
	let _ = if BatMap.mem probname !reduced_info then () else reduced_info := BatMap.add probname ((size_of_expr problem), (0,0)) !reduced_info in
	if (List.length nodelist) < 2 then 
		let _ = if logmode then debug "Answer Found :: %s \n" (string_of_expr problem) else () in
		let _ = result := BatMap.add probname ((current -. start_time), problem) !result in
		problem
	else
		let choiced = choice nodelist in
		let choiced_expr = (expr_of_addr problem choiced) in
		if List.fold_left (fun v a -> v && (BatSet.mem (expr_of_addr problem a) failed)) true nodelist then
			(* If every subterm has been failed to reduce *)
			let _ = if logmode then debug "All Node Failed! Final Answer :: %s \n" (string_of_expr problem) else () in
			let _ = if logmode then debug "Deobfuscation Result: %s\n" (sygus_of_expr problem) else () in 
			let _ = result := BatMap.add probname ((current -. start_time), problem) !result in
			problem
		else if BatSet.mem choiced_expr failed then 
			solve_blast probname problem start_time failed logmode
		else
			let _ = if logmode then debug "Orig Expr: %s\n" (string_of_expr problem) else ()  in
			let _ = if logmode then debug "Size of Orig Expr: %d\n" (size_of_expr problem) else ()  in
			let _ = if logmode then debug "Selected Expr: %s\n" (string_of_expr choiced_expr) else () in
			let (succ, res) = mba_blast choiced_expr in
			if succ then 
				let _ = if logmode then debug "MBA-Blast succeed to reduce this subterm!\n" else () in
				let _ = if logmode then debug "Replaced : %s -> %s\n" (string_of_expr choiced_expr) (string_of_expr res) else () in
				let applied = (replace problem res choiced) in
				if (size_of_expr applied) < (size_of_expr problem) then
					solve_blast probname applied start_time failed logmode
				else
					let _ = if logmode then debug "MBA-Blast failed to reduce this subterm! - reverting...\n" else () in
					let failed' = BatSet.add choiced_expr failed in
					solve_blast probname problem start_time failed' logmode
			else
				let _ = if logmode then debug "MBA-Blast is not applicable to this subterm!\n" else () in
				let failed' = BatSet.add choiced_expr failed in
				solve_blast probname problem start_time failed' logmode

let rec solve_onlyrule probname origprob problem ruleset visited start_time = 
	let problem = minus_pos_to_neg_postive problem in
	let problem = apply_rules problem ruleset (BatSet.add problem BatSet.empty) in
	let current = Unix.time () in
	let _ = if BatMap.mem probname !reduced_info then () else reduced_info := BatMap.add probname ((size_of_expr origprob), (0,0)) !reduced_info in  (* orig_size, (linear reduced, synth reduced)*)
	if (current -. start_time) > !Options.timeout then 
		let _ = result := BatMap.add probname ((current -. start_time), problem) !result in
		(problem, ruleset)
	else
		let nodeset = get_all_subexpr problem (BatSet.add problem BatSet.empty) in
		if (BatSet.cardinal nodeset) < 2 then 
			let _ = debug "Answer Found :: %s \n" (string_of_expr problem) in
			let _ = result := BatMap.add probname ((current -. start_time), problem) !result in
			(problem, ruleset)
		else
			let nodeset_limit = BatSet.filter (fun e -> (is_linear2 e)) nodeset in 
			let nodeset_diff = BatSet.diff nodeset_limit visited in
			if BatSet.is_empty nodeset_diff  then 
				let _ = debug "All Node Visited! \n" in
				let _ = result := BatMap.add probname ((current -. start_time), problem) !result in
				(problem, ruleset)
			else 
				let choiced_expr = get_smallest nodeset_diff in
				let visited' = BatSet.add choiced_expr visited in
				if !Options.evaluate_expr && (is_constant choiced_expr) then (* If there is no var in expr *)
					if (Unsigned.UInt64.compare (evaluate choiced_expr BatMap.empty) (Unsigned.UInt64.of_int max_int)) > 0 then 
						solve_onlyrule probname origprob problem ruleset visited' start_time
					else
						if (Unsigned.UInt64.compare (evaluate choiced_expr BatMap.empty) (Unsigned.UInt64.of_int max_int)) > 0 then 
							solve_onlyrule probname origprob problem ruleset visited' start_time
						else
							let evaluated = if !Options.evaluate_expr then (Constant (Unsigned.UInt64.to_int (evaluate choiced_expr BatMap.empty))) else choiced_expr in
							solve_onlyrule probname origprob (replace_expr problem evaluated choiced_expr) ruleset visited' start_time
			else 
				let _ = debug "Orig Expr: %s\n" (string_of_expr problem)  in
				let _ = debug "Size of Orig Expr: %d\n" (size_of_expr problem)  in
				let _ = debug "Selected Expr: %s\n" (string_of_expr choiced_expr) in
				let sstat = if (run_lsolver (string_of_expr choiced_expr) "") then 0 else 1 in 
				let _ = debug "sstat : %d\n" sstat in
				if sstat = 0 then 
					let sol = evaluate_all_const_expr (parse_linear true) in
					let _ = debug "Deobfuscate Sucessful!\n" in
					let sol = apply_rules sol ruleset (BatSet.add sol BatSet.empty) in
					let sol = (evaluate_all_const_expr sol) in
					let _ = debug "Replaced : %s -> %s\n" (string_of_expr choiced_expr) (string_of_expr sol) in
					if (size_of_expr choiced_expr) < (size_of_expr sol) then
						let _ = debug "Rule makes no size change - reverting...\n" in
						solve_onlyrule probname origprob problem ruleset visited' start_time
					else
					let before_rule = (replace_expr problem sol choiced_expr) in
					let applyed = apply_rules before_rule ruleset (BatSet.add before_rule BatSet.empty) in
					let _ = debug "Deobfuscation Result: %s\n" (string_of_expr applyed) in
					if equal_expr choiced_expr problem then
						solve_onlyrule probname origprob applyed ruleset visited' start_time
					else if (size_of_expr applyed) <= (size_of_expr problem) then
						if (size_of_expr applyed) < (size_of_expr problem) 
						then solve_onlyrule probname origprob applyed ruleset visited' start_time 
						else if equal_expr sol problem then 
							solve_onlyrule probname origprob problem ruleset visited' start_time 
						else 
							let _ = debug "Rule makes no size change - reverting...\n" in
							solve_onlyrule probname origprob problem ruleset visited' start_time 
					else
						let _ = debug "Rule makes expr bigger - reverting...\n" in
						solve_onlyrule probname origprob problem ruleset visited' start_time 
				else 
					(* if succ && solve_status = 3 then raise NotImplemented else  *)
					let _ = debug "Error occured in synthesizer!\n" in
					(* if solve_status = 1 then raise NotImplemented else *)
					solve_onlyrule probname origprob problem ruleset visited' start_time 

let rec solve_cegis probname origprob problem ruleset visited successed linear_successed top_succ start_time =
	let problem = minus_pos_to_neg_postive problem in
	let _ = Expr.ruleapply := 0 in
	let problem = 
		if !Options.learn then problem
		else apply_rules problem ruleset (BatSet.add problem BatSet.empty) 
	in
	let current = Unix.time () in
	let _ = if BatMap.mem probname !reduced_info then () else reduced_info := BatMap.add probname ((size_of_expr origprob), (0,0)) !reduced_info in  (* orig_size, (linear reduced, synth reduced)*)
	let _ = if BatMap.mem probname !alter_rulecount then () else alter_rulecount := BatMap.add probname (((is_poly origprob), BatSet.cardinal (set_of_var origprob)),(count_alternation origprob , !Expr.ruleapply)) !alter_rulecount in  (* (is_poly, varnum) (alter, rulecount)*)
	if (current -. start_time) > !Options.timeout then 
		let _ = result := BatMap.add probname ((current -. start_time), problem) !result in
		(problem, ruleset)
	else 
		let nodeset = get_all_subexpr problem (BatSet.add problem BatSet.empty) in
		if (BatSet.cardinal nodeset) < 2 then 
			let _ = debug "Answer Found :: %s \n" (string_of_expr problem) in
			let _ = result := BatMap.add probname ((current -. start_time), problem) !result in
			(problem, ruleset)
		else
			let nodeset_linear = BatSet.filter (fun e -> (is_linear2 e) && not (is_constant e) ) nodeset in 
			let nodeset_linear_diff = BatSet.diff nodeset_linear successed in
			let nodeset_limit = BatSet.filter (fun e -> true) nodeset in 
			let nodeset_diff = BatSet.diff nodeset_limit visited in
			if BatSet.is_empty nodeset_diff  then 
				if top_succ then
					let _ = debug "timeout : %f\n" !Options.timeout_sygus in
					let _ = to_sygus_file problem (set_of_var problem) (BatSet.add (int_of_float (2. ** 33.)) BatSet.empty) (is_linear2 problem) in
					let sol' = if (check true)
						then 
							let csol = (evaluate_all_const_expr (parse_sygus false)) in
							if (size_of_expr csol) < (size_of_expr problem) then csol
							else problem
						else problem 
					in
					let _ = debug "Answer Found (Checker Solved) :: %s \n" (string_of_expr sol') in
					let _ = debug "Answer Found (Solver Solved) :: %s \n" (string_of_expr problem) in
					let _ = result := BatMap.add probname ((current -. start_time), sol') !result in
					(sol', ruleset)
				else if  !Options.timeout_sygus >= !Options.max_timeout then
					let _ = debug "All Node Visited! Synth Time Limit Reached! \n" in
					let _ = debug "Answer Found (Limit Reached) :: %s \n" (string_of_expr problem) in
					let _ = result := BatMap.add probname ((current -. start_time), problem) !result in
					(problem, ruleset)
				else if (height_of_expr problem) <= !Options.height then 
				(* else if (size_of_expr problem) <= !Options.size then  *)
					let _ = debug "All Node Visited! Increasing Time... \n" in
					let _ = Options.timeout_sygus := if (!Options.timeout_sygus *. 2.) < !Options.max_timeout then !Options.timeout_sygus *. 2. else !Options.max_timeout in
					solve_cegis probname origprob problem ruleset BatSet.empty successed linear_successed top_succ start_time
				else 
					let _ = debug "All Node Visited! Increasing Height and Time... \n" in
					(* If All Node Visited, Increase Height and Synthesis Time Limit *)
					let _ = Options.timeout_sygus := if (!Options.timeout_sygus *. 2.) < !Options.max_timeout then !Options.timeout_sygus *. 2. else !Options.max_timeout in
					let _ = Options.height := if (!Options.height + 1) < (height_of_expr problem) then !Options.height + 1 else (height_of_expr problem) in
					(* let _ = Options.size := if (!Options.size + 10) < (size_of_expr problem) then !Options.size + 10 else (size_of_expr problem) in *)
					solve_cegis probname origprob problem ruleset BatSet.empty successed linear_successed top_succ start_time
			else 
				let choiced_expr = if BatSet.is_empty visited && (not top_succ) then problem 
					else if not (BatSet.is_empty nodeset_linear_diff) then get_largest_expr nodeset_linear_diff else get_smallest nodeset_diff in
				if (size_of_expr choiced_expr) <= 2 then (* If it's already too small *)
					let _ = debug "Choiced Expr is already small :: %s \n" (string_of_expr choiced_expr) in
					solve_cegis probname origprob problem ruleset (BatSet.add choiced_expr visited) (BatSet.add choiced_expr successed) (BatSet.add choiced_expr linear_successed) top_succ start_time
				else
				let expr_linear = (is_linear2 choiced_expr) in
				let expr_lsolve = not (!Options.lsolver = "") && expr_linear && not (BatSet.mem choiced_expr linear_successed) && ((BatSet.cardinal (set_of_var choiced_expr)) < 4) in (* 나온 결과가 최소 크기가 아닐 수도 있으므로, 합성기를 돌림 *)
				(* 쪼갠 게 Linear이면 *)
				let _ = if expr_linear then debug "Target expr is linear\n" else () in
				let _ = if expr_lsolve then debug "Target expr should be solved by linear solver\n" else () in
				let limited, varmap, revmap = if expr_lsolve then (choiced_expr, BatMap.empty, BatMap.empty) else (limit2 choiced_expr !Options.height) in
				(* let limited, varmap, revmap = if expr_lsolve then (choiced_expr, BatMap.empty, BatMap.empty) else (limit_by_size choiced_expr !Options.size !Options.max_var) in *)
				let expr_nary = (is_nary (eliminate_minus limited)) in
				let nary_subexpr = if expr_nary then (BatSet.of_list (get_all_subexpr_nary (nary_of_expr (eliminate_minus limited)) 2)) else BatSet.empty in
				let nstr = BatSet.fold (fun e s -> s ^ " // " ^ (string_of_expr e)) nary_subexpr "" in 
				let _ = debug "all subexpr of nary : %s\n" nstr in
				let expr_nary_solvable = (not expr_lsolve) && expr_nary && not (BatSet.is_empty (BatSet.diff nary_subexpr visited)) in
				let orig_limited = limited in
				let orig_limited_nary = (nary_of_expr (eliminate_minus limited)) in
				let limited = if expr_nary_solvable then 
						let largest = 
							match orig_limited_nary with 
							| NExpr(Plus,_) -> (try get_largest_linear_expr orig_limited_nary 
								with _ -> BatSet.any (BatSet.diff nary_subexpr visited) )
							| _ -> BatSet.any (BatSet.diff nary_subexpr visited)
						in
						if BatSet.mem largest visited then BatSet.any (BatSet.diff nary_subexpr visited) else largest
					else limited in
				let nary_linear = not (!Options.lsolver = "") && expr_nary_solvable && (is_linear2 limited) &&  not (BatSet.mem limited linear_successed) && ((BatSet.cardinal (set_of_var limited)) < 4) in 
				let _ = if expr_nary_solvable then debug "Target expr can be solved with nary tatics %s\n" (if nary_linear then " (linear)" else "") else () in
				let _ = if (is_poly limited) then debug "Poly expr : %s\n" (string_of_expr2 limited) else () in
				let visited' = if expr_lsolve || nary_linear then visited else if expr_nary_solvable && (not nary_linear) then BatSet.add limited visited else BatSet.add choiced_expr visited in (* Linear expr should be synthesized *)
				if !Options.evaluate_expr && is_constant choiced_expr then (* If there is no var in expr *)
					let evaluated = if !Options.evaluate_expr then (Constant (Unsigned.UInt64.to_int (evaluate choiced_expr BatMap.empty))) else choiced_expr in
					solve_cegis probname origprob (replace_expr problem evaluated choiced_expr) ruleset visited' successed linear_successed top_succ start_time
				else 
					let _ = debug "Orig Expr: %s\n" (string_of_expr problem)  in
					let _ = debug "Size of Orig Expr: %d\n" (size_of_expr problem)  in
					let _ = debug "Target size of selected expr: %d\n" !Options.size  in
					let _ = debug "Selected Expr: %s\n" (string_of_expr limited) in
					let _ = if expr_nary_solvable then debug "Selected Expr (In Real): %s\n" (string_of_expr orig_limited) else () in
					(* let (succ, res) = try (true, (solve_blast "blast" choiced_expr (Unix.time ()) BatSet.empty false)) with _ -> (false, choiced_expr) in
					let _ = if succ then (debug "MBABlast Result: %s\n" (string_of_expr res)) else (debug "MBABlast Failed\n") in *)
					let _ = to_sygus_file limited (set_of_var limited) (set_of_const limited) expr_linear in
					let sstat = if expr_lsolve || nary_linear then (if (run_lsolver (string_of_expr limited) "") then 0 else 1) else solve true in 
					let _ = debug "sstat : %d\n" sstat in
					let solve_status = if expr_lsolve || nary_linear then sstat else 
						if ((sstat = 3 && ((height_of_expr limited) < 4)) || sstat = 1) then 
							(if (check true) then 4 else 1)
						else sstat in
					let _ = debug "solve status : %d\n" solve_status in
					if (solve_status mod 2) = 0 then 
						let sol = 
							if sstat = 2 then (Constant 0) else if expr_lsolve || nary_linear then (substitute (evaluate_all_const_expr (parse_linear true)) varmap) else
							(substitute (evaluate_all_const_expr (parse_sygus (solve_status = 0))) varmap) in
						let successed' = if expr_lsolve || nary_linear then successed else BatSet.add (substitute sol varmap) (BatSet.add limited successed) in
						let linear_successed' = if expr_lsolve || nary_linear then BatSet.add (substitute sol varmap) (BatSet.add limited linear_successed) else linear_successed in
						let _ = if solve_status = 2 then debug "Deobfuscate Sucessful! (Trivial Answer)\n" 
							else if solve_status = 4 then debug "Deobfuscate Sucessful! (Checker Answer)\n" 
							else debug "Deobfuscate Sucessful!\n" in
						let _ = BatMap.iter (fun k v -> let _ =  debug "varset : %s -> %s\n" k (string_of_expr v) in () ) varmap in
						let sol_orig = (substitute sol varmap) in
						let sol = if expr_nary_solvable then (expr_of_nary (replace_nary (nary_of_expr (eliminate_minus orig_limited)) limited sol )) else sol in
						let sol = apply_rules (substitute sol varmap) ruleset (BatSet.add (substitute sol varmap) BatSet.empty) in
						let sol = (evaluate_all_const_expr sol) in
						let _ = debug "Replaced : %s -> %s\n" (string_of_expr limited) (string_of_expr (substitute sol varmap)) in
						let _ = if expr_nary_solvable then debug "Replaced : %s -> %s\n" (string_of_expr choiced_expr) (string_of_expr (substitute sol varmap)) else ()in
						if (size_of_expr choiced_expr) < (size_of_expr (substitute sol varmap)) then
							let _ = debug "Rule makes no size change - reverting...\n" in
							solve_cegis probname origprob problem ruleset visited' successed' linear_successed' ((equal_expr limited problem) || top_succ) start_time
						else
						let ruleset' = if not (expr_lsolve || nary_linear) then add_rule choiced_expr (substitute sol varmap) ruleset else ruleset in
						let ruleset' = if not (expr_lsolve || nary_linear) then normalize_rules ruleset' else ruleset' in 
						let _ = BatSet.iter (fun e -> debug "rule : %s -> %s\n" (string_of_expr (fst e)) (string_of_expr (snd e))) ruleset' in
						let before_rule = (replace_expr problem (substitute sol varmap) choiced_expr) in
						let applyed = 
							if !Options.learn then before_rule
							else 
								let _ = Expr.ruleapply := 0 in
								apply_rules before_rule ruleset' (BatSet.add before_rule BatSet.empty) 
						in
						let _ = debug "Deobfuscation Result: %s\n" (string_of_expr applyed) in
						if equal_expr limited problem then
							let (orig_size, (linear_reduce, synth_reduce)) = BatMap.find probname !reduced_info in
							let reduced_size = (size_of_expr problem) - (size_of_expr applyed) in
							let _ = reduced_info := BatMap.add probname ((orig_size), ((linear_reduce + (if expr_lsolve || nary_linear then reduced_size else 0)),
							(synth_reduce + (if not (expr_lsolve || nary_linear) then reduced_size else 0)))) !reduced_info in
							solve_cegis probname origprob applyed ruleset' visited' successed' linear_successed' true start_time
						else if (size_of_expr applyed) <= (size_of_expr problem) then
							let (orig_size, (linear_reduce, synth_reduce)) = BatMap.find probname !reduced_info in
							let ((ispoly, varn), (alterorig, rulec)) = BatMap.find probname !alter_rulecount in
							let reduced_size = (size_of_expr problem) - (size_of_expr applyed) in
							let _ = reduced_info := BatMap.add probname ((orig_size), ((linear_reduce + (if expr_lsolve || nary_linear then reduced_size else 0)),
							(synth_reduce + (if not (expr_lsolve || nary_linear) then reduced_size else 0)))) !reduced_info in
							let _ = alter_rulecount := BatMap.add probname ((ispoly, varn), (alterorig, (rulec + (!Expr.ruleapply)))) !alter_rulecount in
							if (size_of_expr applyed) < (size_of_expr problem) 
							then solve_cegis probname origprob applyed ruleset' visited' successed' linear_successed' top_succ start_time
							else if equal_expr (substitute sol varmap) problem then 
								solve_cegis probname origprob problem ruleset visited' successed' linear_successed' true start_time
							else 
								let _ = debug "Rule makes no size change - reverting...\n" in
								solve_cegis probname origprob problem ruleset visited' successed' linear_successed' top_succ start_time
						else
							let _ = debug "Rule makes expr bigger - reverting...\n" in
							solve_cegis probname origprob problem ruleset visited' successed' linear_successed' top_succ start_time
					else 
						(* if succ && solve_status = 3 then raise NotImplemented else  *)
						let _ = debug (if solve_status = 1 then "Error occured in synthesizer!\n" else "Synthesizer timed out.\n") in
						(* if solve_status = 1 then raise NotImplemented else *)
						solve_cegis probname origprob problem ruleset visited' successed linear_successed top_succ start_time

(* let deobfuscate probinfo = *)
	(* Translate each problem into SyGuS and Solve *)
(* 	|> expr_to_sygus *)
	(* If timed out, drop the problem and proceed to next one *)
(* 	|> solve *)

(* 
	ProMBA : MBA deobfuscator via Program Synthesis and Term Rewriting
	Assumption :
		i)   Function name with prefix "target_" is considered as deobfuscation problem
*)
let main () =  
	(* Parse all options *)
	Arg.parse Options.options args "";
	(* Get All problems. Each function is synthesis problem *)
	if !Options.mbaOnly then
		let mbaexp = parse_mba !src_file in
		let prerule = if !Options.learn || !Options.noRule then BatSet.empty else Utils.load_rules !Options.rulefile in
		let (applyed, ruleset') = 
			if !Options.mbasolve then 
				let resexpr = solve_mbasolve "mba_problem" mbaexp (Unix.time ()) BatSet.empty in
				(resexpr, prerule)
			else solve_cegis "mba_problem" mbaexp mbaexp prerule BatSet.empty BatSet.empty BatSet.empty false (Unix.time ()) in
		let str_rules = BatSet.fold 
			(fun rule str -> str ^ (string_of_expr (fst rule)) ^ "\n" ^ (string_of_expr (snd rule)) ^ "\n" )
			ruleset' "" in
		let str_result = BatMap.foldi (fun k v s -> s ^ (Printf.sprintf "Name: %s, Result: %s, Size: %d, Time: %f\n" k (string_of_expr (snd v)) (size_of_expr (snd v)) (fst v) )) !result "" in
		let _ = Utils.string_to_file !Options.result str_result in
		if !Options.learn && (not !Options.noRule) then let _ = Utils.string_to_file !Options.rulefile str_rules in () else ()
	else if !Options.genexpr then 
		let setexpr = Floki.generate_expr 250 in
		let str_result = BatSet.fold (fun e s -> s ^ (string_of_expr e) ^ "\n") setexpr "" in
		let _ = Utils.string_to_file "generated_expr.txt" str_result in ()
	else if not (!Options.floki = "") then
		(* 배운 규칙이 있으면 그냥 그걸로 난독화 *)
		(* 없으면 규칙 생성 후 난독화 *)
		(* groundtruth는 linear 50개 poly 100개 non-poly 100개로 구성 *)
		(* 모든 식은 변수 2개가 들어가는 식이며, 크기는 10 이하의 임의의 식 *)
		let _, rs = Floki.enumerate 6 in
		let rens = BatMap.map (fun v -> BatSet.enum v) rs in 
		let expr_list = load_exprs !Options.floki in
		let olist = List.map (fun e -> Floki.obfuscate e rs) expr_list in
		let header = "#include <stdlib.h>\n#include <stdint.h>\n#include <stdio.h>\n" in
		let str_result = BatList.fold_lefti (fun s idx e -> s ^ 
			"uint64_t target_" ^ (string_of_int idx) ^ "(uint64_t var1, uint64_t var2, uint64_t dummy){\n\t\treturn "^(string_of_expr e)^";\n}\n"
		) "" olist in
		let _ = Utils.string_to_file (!Options.floki ^ ".obfuscated.c") (str_result) in 
		exit 1 
	else if not (Sys.file_exists !src_file) then
		let _ = debug "Error: File should be provided!\n" in
		exit 1
	else
		let cil = CilHelper.parse_one_file !src_file in
		let prerule = Utils.load_rules !Options.rulefile in
		let learned_rules = BatMap.foldi (fun k v rules -> 
			if (String.equal k !Options.single) || (String.equal "" !Options.single) then
				let _ = debug "Solving Problem: \027[31m %s \027[0m\n" k in
				if !Options.blast then
					let _ = solve_blast k (Expr.expr_of_cil v) (Unix.time ()) BatSet.empty true in (* Solve problem with PBE *)
					rules
				else if !Options.mbasolve then
					let _ = solve_mbasolve k (Expr.expr_of_cil v) (Unix.time ()) BatSet.empty in (* Solve problem with PBE *)
					rules
				else if !Options.pbe then  
					let _ = solve_pbe (Expr.expr_of_cil v) in (* Solve problem with PBE *)
					rules
				else if !Options.onlyRule then
					let problem = (Expr.expr_of_cil v) in
					let (applyed, ruleset') = solve_onlyrule k problem problem rules BatSet.empty (Unix.time ()) in
					ruleset'
				else 
					let (applyed, ruleset') = solve_cegis k (Expr.expr_of_cil v) (Expr.expr_of_cil v) rules BatSet.empty BatSet.empty BatSet.empty false (Unix.time ()) in
					let str_rules = BatSet.fold 
						(fun rule str -> str ^ (string_of_expr (fst rule)) ^ "\n" ^ (string_of_expr (snd rule)) ^ "\n" )
						ruleset' "" in
					let _ = if !Options.learn && (not !Options.noRule) then Utils.string_to_file !Options.rulefile str_rules else () in
					ruleset'
			else rules
		) !CilHelper.problemSet prerule in 
		let str_rules = BatSet.fold 
			(fun rule str -> str ^ (string_of_expr (fst rule)) ^ "\n" ^ (string_of_expr (snd rule)) ^ "\n" )
			learned_rules "" in
		let str_result = BatMap.foldi (fun k v s -> 
			let (orig_size, (linear_reduce, synth_reduce)) = try BatMap.find k !reduced_info with _ -> (0,(0,0)) in
			let ((ispoly, varn), (alterorig, rulec)) = try BatMap.find k !alter_rulecount with _ -> ((false,0),(0,0)) in
			s ^ (Printf.sprintf "Name: %s, Result: %s, Size: %d, OrigSize: %d, VarNum: %d, IsPoly: %b, AlterOrig: %d, AlterDeob: %d, RuleNumber: %d, RuleCount: %d, LinearReduce: %d, SynthReduce: %d, RuleReduce: %d, Time: %f\n" 
			k (string_of_expr (snd v)) (size_of_expr (snd v)) orig_size varn ispoly alterorig (count_alternation (snd v)) (BatSet.cardinal learned_rules) rulec linear_reduce synth_reduce (orig_size - linear_reduce - synth_reduce) (fst v) )) !result "" in
		let _ = Utils.string_to_file !Options.result str_result in
		if !Options.learn && (not !Options.noRule) then let _ = Utils.string_to_file !Options.rulefile str_rules in () else ()
	
	

	(* [
			()
		 ] *)
	(* let problems = get_all_problems !src_file in *)
	(* let _ = if !Options.debug then BatMap.iter (fun k v -> 
		let _ = debug "Current Problem: %s\n" k in
 		let _ = solve_problem (parse_mba v) BatSet.empty in raise BadCode
 	) problems in () *)

let _ = main ()
(* 	|> deobfuscate *)
