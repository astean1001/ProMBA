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
open Expr

(* 
let synthesized = ref BatSet.empty *)

let rec no_div_var e = 
  match e with
  | BExpr(Div, _, e1) -> is_constant e1
  | BExpr(Mod, _, e1) -> is_constant e1
  | BExpr(_,e1,e2) -> (no_div_var e1) && (no_div_var e2)
  | UExpr(_,e1) -> (no_div_var e1)
  | _ -> true

let rec check_equiv_by_example n e1 e2 =
  if n = 0 then true
  else 
    let varmap = BatMap.add "var2" (Random.int 99999) (BatMap.add "var1" (Random.int 99999) BatMap.empty) in
    let e1_res = evaluate_bitvec e1 varmap in
    let e2_res = evaluate_bitvec e2 varmap in
    if e1_res = e2_res then
      check_equiv_by_example (n-1) e1 e2
    else 
      false

let check_equivalence e1 e2 = 
  let varset = BatSet.of_list ["var1";"var2"] in
  if try check_equiv_by_example 100 e1 e2 with _ -> false then 
    let _ = Utils.to_smt_file e1 e2 (BatSet.union (set_of_var e1) (set_of_var e2)) "8" in
    let equiv = Utils.ask_smt false in 
    equiv
  else false

let initial_keys =
  [ Var "var1"; BExpr(Plus, Var "var1", Var "var2"); BExpr(Mul, Var "var1", Var "var2"); BExpr(Mul, Var "var1", Var "var1"); 
    BExpr(Mod, Var "var1", Var "var2"); BExpr(Div, Var "var1", Var "var1"); BExpr(Mul, Var "var1", Constant (BV64.int 2));
    BExpr(And, Var "var1", Var "var2"); BExpr(Or, Var "var1", Var "var2"); BExpr(Xor, Var "var1", Var "var2");
    Constant BV64.one; Constant (BV64.int 2); Constant BV64.zero;
  ]

let initial_rules = BatList.fold (fun m e -> BatMap.add e BatSet.empty m) BatMap.empty initial_keys

let enumerate size = 
  (* Two variables at first *)
  (* let size_one = BatSet.of_list [ (Constant 0); (Constant 1); (Constant 2); (Var "var1"); (Var "var2") ] in *)
  let size_one = BatSet.of_list [ (Var "var1"); (Var "var2") ] in
  let rec enumerate_inner init_size init_comps init_rules visited = 
    let rec compose s comps = 
      if (BatSet.cardinal comps) < 1 then BatSet.empty else
      let target, remainder = BatSet.pop comps in
      if (size_of_expr target) >= s then BatSet.add target (compose s remainder)
      else 
        let connectables = BatSet.filter (fun e -> (size_of_expr e) <= (s-1-(size_of_expr target))) remainder in
        let bops = [Plus; Minus; Mul; Div; Mod; LShift; RShift; Xor; And; Or] in
        let sized = BatSet.fold (fun cone ns -> 
          BatSet.union ns (BatSet.of_list (List.map (fun op -> BExpr(op, target, cone)) bops)) 
        ) connectables BatSet.empty in
        BatSet.union (BatSet.union (BatSet.of_list [(UExpr(Neg, target)); (UExpr(Not, target))]) sized) (compose s remainder)
    in
    let equivs = BatMap.foldi (fun k v s -> 
        BatSet.union v s
      ) init_rules BatSet.empty in
    let init_comps' = BatSet.diff init_comps equivs in
    let composed = (compose init_size init_comps') in
    let allcomp = (BatSet.union composed init_comps) in
    let visited' = BatSet.union visited composed in
    let ccomps = BatSet.diff (BatSet.union composed init_comps) visited in
    let _ = debug "Before Equivalence Elimination : %d\n" (BatSet.cardinal ccomps) in
    let rulesets = BatSet.fold (fun e rulemap -> 
        let equiv_key = BatMap.foldi (fun k v e -> 
          (* let _ = debug "Checking Expr : %s -> %s : %b\n" (string_of_expr k) (string_of_expr e) (check_equivalence k e) in  *)
          if check_equivalence k e then k
          else e
        ) rulemap e in
        if equal_expr equiv_key e then rulemap
        else BatMap.add equiv_key (BatSet.add e (BatMap.find equiv_key rulemap)) rulemap
      ) ccomps init_rules
    in
    let rulesets = BatMap.map (fun v -> 
      BatSet.filter (fun ee -> no_div_var ee) v
      ) rulesets in
    let ruleStr = BatMap.foldi (fun k v s -> 
       (BatSet.fold (fun el ss -> (string_of_expr k) ^ " -> " ^ (string_of_expr el) ^ "\n" ^ ss ) v "") ^ s
    ) rulesets "" in
    let _ = debug "Rules for Equivalence Elimination : %s" ruleStr in
    let _ = debug "After Equivalence Elimination : %d\n" (BatSet.cardinal allcomp) in
    if init_size < size then
      enumerate_inner (init_size+1) allcomp rulesets visited'
    else
      allcomp, rulesets
  in
  enumerate_inner 2 size_one initial_rules BatSet.empty

let rec should_has_hardexpr e = 
  match e with
  | BExpr(Mul,_,_)
  | BExpr(Div,_,_)
  | BExpr(Mod,_,_)
  | BExpr(LShift,_,_)
  | BExpr(RShift,_,_) -> true
  | BExpr(_,e1,e2) -> (should_has_hardexpr e1) || (should_has_hardexpr e2)
  | UExpr(_,e1) -> (should_has_hardexpr e1)
  | _ -> false

let enumerate_without_z3 size = 
  (* Two variables at first *)
  (* let size_one = BatSet.of_list [ (Constant 0); (Constant 1); (Constant 2); (Var "var1"); (Var "var2") ] in *)
  let size_one = BatSet.of_list [ (Constant BV64.one); (Var "var1"); (Var "var2") ] in
  let rec enumerate_inner init_size init_comps visited = 
    let rec compose s comps = 
      if (BatSet.cardinal comps) < 1 then BatSet.empty else
      let target, remainder = BatSet.pop comps in
      if (size_of_expr target) >= s then BatSet.add target (compose s remainder)
      else 
        let connectables = BatSet.filter (fun e -> (size_of_expr e) <= (s-1-(size_of_expr target))) remainder in
        let bops = [Plus; Minus; Mul; Div; Mod; LShift; RShift; Xor; And; Or] in
        let sized = BatSet.fold (fun cone ns -> 
          BatSet.union ns (BatSet.of_list (List.map (fun op -> BExpr(op, target, cone)) bops)) 
        ) connectables BatSet.empty in
        BatSet.union (BatSet.union (BatSet.of_list [(UExpr(Neg, target)); (UExpr(Not, target))]) sized) (compose s remainder)
    in
    let composed = (compose init_size init_comps) in
    let allcomp = (BatSet.union composed init_comps) in
    let visited' = BatSet.union visited composed in
    let ccomps = BatSet.diff (BatSet.union composed init_comps) visited in
    let _ = debug "After Equivalence Elimination : %d\n" (BatSet.cardinal allcomp) in
    (* let synthed = BatSet.fold (fun e s -> (string_of_expr e) ^ " // " ^ s) allcomp "" in
    let _ = debug "%s\n" synthed in *)
    if init_size < size then
      enumerate_inner (init_size+1) allcomp visited'
    else
      BatSet.filter (fun x -> (not (is_constant x)) && (should_has_hardexpr x) ) allcomp
  in
  enumerate_inner 2 size_one BatSet.empty

let obfuscate e ruleenu = 
  let ruleenum = BatMap.filterv (fun v -> not (BatSet.is_empty v)) ruleenu in
  let _ = BatMap.iter (fun k v -> 
    let _ = debug "pikaaaa : %d\n" (BatSet.cardinal v) in ()
    ) ruleenum in
  let rec inner_obfucscate expr depth =
    if depth = 0 then expr
    else 
      let rec replace_with_rule s expr = 
        if BatMap.mem expr s then BatMap.find expr s 
        else 
          match expr with
          | BExpr (b, e1, e2) -> BExpr(b, (replace_with_rule s e1), (replace_with_rule s e2))
          | UExpr (u, e1) -> UExpr(u, (replace_with_rule s e1))
          | _ -> expr (* It should be called on perfect match *)
      in
      let rec apply_rule e' rule = 
        let orig_expr = fst rule in
        let deob_expr = snd rule in 
        let s = try match_rule (BatSet.add (orig_expr, e') BatSet.empty) BatMap.empty with _ -> BatMap.empty in
        if BatMap.is_empty s then 
          match e' with
          | Constant _ -> e'
          | BExpr (b, e1, e2) -> BExpr(b, (apply_rule e1 rule), (apply_rule e2 rule))
          | UExpr (u, e1) -> UExpr(u, (apply_rule e1 rule))
          | Var _ -> e'
        else 
          replace_with_rule s deob_expr
      in
      let ruled = BatMap.foldi (fun k v es -> 
        apply_rule es (k,(BatRandom.choice (BatSet.enum v)))) ruleenum 
          (if (BatSet.cardinal (set_of_var expr)) < 2 then 
              BExpr(Plus, BExpr(Mul, Constant BV64.zero, Var "dummy"), expr)
            else expr) in
      inner_obfucscate ruled (depth-1)
  in
  inner_obfucscate e 5

let generate_expr num = 
  let cands = enumerate_without_z3 7 in
  let cands = BatSet.filter (fun e -> no_div_var e) cands in
  BatSet.of_enum (BatRandom.multi_choice num (BatSet.enum cands))
