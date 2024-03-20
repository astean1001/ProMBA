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

open Lacaml.S
open Expr

exception NotSupported
exception BadParams
exception Undividable

let pprint_fll ll = 
  let _ = List.iter (fun l -> 
    let s = List.fold_left (fun s i -> s ^ (string_of_float i) ) "" l in
    let _ = debug "%s \n" s in ()
  ) ll in ()

let pprint_intlist l =
  let str = List.fold_left (fun s le -> 
    s ^ ", " ^ (string_of_int le)
  ) "" l in
  let _ = debug "[%s]\n" str in ()

let pprint_ill ll = 
  let _ = List.iter (fun l -> 
    let s = List.fold_left (fun s i -> s ^ (string_of_int i) ) "" l in
    let _ = debug "%s \n" s in ()
  ) ll in ()

let int_of_bit bit = 
  let (_,num) = List.fold_right (fun el (i, res)  -> (i*2, res+(i*el))) bit (1,0) in
  num

let get_basis vnumber = 
  let x = Var "var1" in
  let y = Var "var2" in
  let z = Var "var3" in
  if vnumber = 1 then [x; UExpr(Neg, Constant BV64.one)]
  else if vnumber = 2 then [x; y; BExpr(And,x,y); UExpr(Neg, Constant BV64.one)]
  else if vnumber = 3 then [x; y; z; BExpr(And,x,y); BExpr(And,x,z); BExpr(And,y,z); BExpr(And,x,BExpr(And,y,z)); UExpr(Neg, Constant BV64.one)]
  else raise NotSupported

let get_replaceable_bit vnumber =
  let x = Var "var1" in
  let y = Var "var2" in
  let z = Var "var3" in
  if vnumber = 1 then [Constant BV64.zero; x; UExpr(Not, x); UExpr(Neg, Constant BV64.one)]
  else if vnumber = 2 then List.map (fun s -> Utils.parse_mba s) (Utils.get_lines "2variable_booltable.txt")
  else if vnumber = 3 then List.map (fun s -> Utils.parse_mba s) (Utils.get_lines "3variable_booltable.txt")
  else raise NotSupported

let get_evalset l vnumber =
  fst (List.fold_left (fun (bm, i) v -> 
    ((BatMap.add ("var"^(string_of_int i)) v bm), (i-1))
  ) (BatMap.empty,vnumber) l)

let bitlist_of_int i = 
  let rec bitlist_of_int_inner acc i =
    if i=0 then acc
    else bitlist_of_int_inner (i land 1::acc) (i lsr 1)
  in
  bitlist_of_int_inner [] i

let rec pad_list l i = 
  if (List.length l) < i then pad_list ([0]@l) i else l

let rec rev_pad_list l i = 
  if (List.length l) < i then rev_pad_list (l@[0]) i else l

let pow a b = int_of_float ((float_of_int a) ** (float_of_int b))

(* we assmue all variables are already substituted in var[0-9] form*)
let get_truthtable vnumber expr =
  let bit_length = pow 2 vnumber in
  let worklist = fst (List.fold_left (fun (res, i) _ -> 
      ((pad_list (bitlist_of_int i) vnumber)::res,i+1)
    ) ([],0) (pad_list [] bit_length))
  in 
  List.rev_map (fun b -> (Unsigned.UInt64.to_int (evaluate expr (get_evalset b vnumber))) land 1 ) worklist

let get_truthtable_int vnumber expr =
  let bit_length = pow 2 vnumber in
  let worklist = fst (List.fold_left (fun (res, i) _ -> 
      ((pad_list (bitlist_of_int i) vnumber)::res,i+1)
    ) ([],0) (pad_list [] bit_length))
  in 
  List.rev_map (fun b -> (Unsigned.UInt64.to_int (evaluate expr (get_evalset b vnumber))) ) worklist
  
let to_floatlist l = 
  List.map (fun i -> float_of_int i) l

let rec bit_to_expr bitlist basis =
  match bitlist, basis with
  | n::[], e::[] -> BExpr(Mul, (if n > 0 then Constant (BV64.int n) else if n = 0 then Constant (BV64.int n) else UExpr(Neg, Constant (BV64.int (-n)))), e)
  | 0::t1, e::t2 -> bit_to_expr t1 t2
  | n::t1, e::t2 -> BExpr(Plus,BExpr(Mul, (if n > 0 then Constant (BV64.int n) else UExpr(Neg, Constant (BV64.int (-n)))), e), bit_to_expr t1 t2)
  | _, _ -> raise BadParams

let basis_of_bittable vnumber = 
  let bit_length = pow 2 vnumber in
  let table_length = pow 2 bit_length in
  let worklist_int = fst (List.fold_left (fun (res, i) _ -> 
      ((pad_list (bitlist_of_int i) bit_length)::res,i+1)
    ) ([],0) (pad_list [] table_length))
  in 
  let bits = get_replaceable_bit vnumber in
  let worklist2 = List.map (fun e -> (get_truthtable vnumber e) ) bits in
  let worklist = List.map (fun ll -> [List.map (fun i -> float_of_int i) ll]) worklist2 in
  let basis = get_basis vnumber in
  let basis_truthtable = List.map (fun e -> 
    to_floatlist (get_truthtable vnumber e) 
  ) basis in
  let mat_btt = Mat.of_list basis_truthtable in
  let basis_bittable = List.rev_map (fun n -> 
    let a = Mat.transpose_copy mat_btt in 
    let b = Mat.transpose_copy (Mat.of_list n) in
    let _ = gesv a b in
    List.map (fun n -> int_of_float n) (List.fold_left (fun rl ll -> rl @ ll) [] (Mat.to_list b))
  ) worklist in
  let basis_mbatable = basis_bittable in
  List.fold_left2 (fun m tt mt -> 
    (* let _ = pprint_intlist tt in
    let _ = pprint_intlist mt in *)
    BatMap.add tt mt m) BatMap.empty worklist_int basis_mbatable

let basis_of_bit vnumber = 
  let bit_length = pow 2 vnumber in
  let table_length = pow 2 bit_length in
  let worklist_int = fst (List.fold_left (fun (res, i) _ -> 
      ((pad_list (bitlist_of_int i) bit_length)::res,i+1)
    ) ([],0) (pad_list [] table_length))
  in 
  let worklist = List.map (fun ll -> [List.map (fun i -> float_of_int i) ll]) worklist_int in
  let basis = get_basis vnumber in
  let basis_truthtable = List.map (fun e -> 
    to_floatlist (get_truthtable vnumber e) 
  ) basis in
  let mat_btt = Mat.of_list basis_truthtable in
  let basis_bittable = List.rev_map (fun n -> 
    let a = Mat.transpose_copy mat_btt in 
    let b = Mat.transpose_copy (Mat.of_list n) in
    let _ = gesv a b in
    List.map (fun n -> int_of_float n) (List.fold_left (fun rl ll -> rl @ ll) [] (Mat.to_list b))
  ) worklist in
  let basis_mbatable = List.rev_map (fun l -> bit_to_expr l basis) basis_bittable in
  List.fold_left2 (fun m tt mt -> BatMap.add tt mt m) BatMap.empty worklist_int basis_mbatable

let is_reducible expr = 
  (is_linear expr) && ((BatSet.cardinal (set_of_var expr)) < 4)

let replace_to_varname expr = 
  let varlist = BatSet.to_list (set_of_var expr) in
  let varmap = fst (List.fold_left (fun (m,i) v -> ((BatMap.add ("var"^(string_of_int i)) v m),i+1)) (BatMap.empty, 1) varlist) in
  let rec find_idx e l =
    match l with
    | [] -> 0
    | v::t -> if e = v then 1 else (find_idx e t) + 1
  in
  let rec change_var e =
    match e with
    | BExpr(t,e1,e2) -> BExpr(t, (change_var e1), (change_var e2))
    | UExpr(t,e1) -> UExpr(t, (change_var e1))
    | Constant _ -> e
    | Var x -> Var ("var" ^ (string_of_int (find_idx x varlist)))
  in
  ((change_var expr), varmap)

let bool_to_mba expr vnumber = 
  let basis_map = basis_of_bit vnumber in
  BatMap.find (get_truthtable vnumber expr) basis_map

let rec reduce_bool_with_mba expr vnumber =
  match expr with
  | BExpr(Plus, e1, e2) -> BExpr(Plus, (reduce_bool_with_mba e1 vnumber), (reduce_bool_with_mba e2 vnumber))
  | BExpr(Minus, e1, e2) -> BExpr(Minus, (reduce_bool_with_mba e1 vnumber), (reduce_bool_with_mba e2 vnumber))
  | BExpr(Mul, Constant n, e) -> BExpr(Mul, Constant n, (reduce_bool_with_mba e vnumber))
  | BExpr(Mul, e, Constant n) -> BExpr(Mul, Constant n, (reduce_bool_with_mba e vnumber))
  | BExpr(And, _, _) -> bool_to_mba expr vnumber
  | BExpr(Or, _, _) -> bool_to_mba expr vnumber
  | BExpr(Xor, _, _) -> bool_to_mba expr vnumber
  | UExpr(Neg, e) -> UExpr(Neg, (reduce_bool_with_mba e vnumber))
  | UExpr(Not, _) -> bool_to_mba expr vnumber
  | Var _ -> expr
  | Constant _ -> expr
  | _ -> raise BadParams
  
let rec to_temp_var expr vnumber =
  let basis = get_basis vnumber in
  let rec find_idx e l =
    match l with
    | [] -> 0
    | v::t -> if equal_expr e v then 1 else (find_idx e t) + 1
  in
  let minusone = UExpr(Neg, Constant BV64.one) in
  match expr with
  | BExpr(Plus, e1, e2) -> BExpr(Plus, (to_temp_var e1 vnumber), (to_temp_var e2 vnumber))
  | BExpr(Minus, e1, e2) -> BExpr(Minus, (to_temp_var e1 vnumber), (to_temp_var e2 vnumber))
  | BExpr(Mul, e1, e2) -> BExpr(Mul, (to_temp_var e1 vnumber), (to_temp_var e2 vnumber))
  | BExpr(And, e1, e2) -> Var ("temp"^ (string_of_int (find_idx expr basis)))
  | BExpr(Or, e1, e2) -> Var ("temp"^ (string_of_int (find_idx expr basis)))
  | BExpr(Xor, e1, e2) -> Var ("temp"^ (string_of_int (find_idx expr basis)))
  | UExpr(Neg, Constant BV64.one) -> Constant (BV64.int (-1))
  | UExpr(Neg, e) -> UExpr(Neg, (to_temp_var e vnumber))
  | UExpr(Not, e) -> Var ("temp"^ (string_of_int (find_idx expr basis)))
  | Var _ -> Var ("temp"^ (string_of_int (find_idx expr basis)))
  | Constant _ -> expr
  | _ -> raise BadParams

let z3_simplify expr = 
  let _ = Utils.to_simplify_file (sygus_of_expr expr) (set_of_var expr) in
  Utils.ask_smt true

let rec tempvar_to_expr e vnumber = 
  let basis = get_basis vnumber in
  match e with
  | BExpr(t,e1,e2) -> BExpr(t,tempvar_to_expr e1 vnumber, tempvar_to_expr e2 vnumber)
  | UExpr(t,e1) -> UExpr(t, tempvar_to_expr e1 vnumber)
  | Constant _ -> e
  | Var x -> if BatString.starts_with x "temp" then List.nth basis ((int_of_string (BatString.lchop ~n:4 x))-1) else e

let rec varname_to_original e varmap =
  match e with
  | BExpr(t,e1,e2) -> BExpr(t,varname_to_original e1 varmap, varname_to_original e2 varmap)
  | UExpr(t,e1) -> UExpr(t, varname_to_original e1 varmap)
  | Constant _ -> e
  | Var x -> Var (BatMap.find x varmap)

let reverse_map m =
  BatMap.foldi (fun k v n -> BatMap.add v k n) m BatMap.empty 

let replace_expr_with_temp expr varmap =
  let reverse = reverse_map varmap in
  if BatMap.mem expr reverse then (Var (BatMap.find expr reverse), varmap)
  else 
    let repvar = "rep" ^ (string_of_int (BatMap.cardinal varmap)) in
    (Var repvar, BatMap.add repvar expr varmap)

let rec to_linear e varmap = 
  match e with
  | BExpr(Plus, e1, e2) -> 
    let (e1', varmap) = to_linear e1 varmap in
    let (e2', varmap) = to_linear e2 varmap in
    (BExpr(Plus, e1', e2'), varmap)
  | BExpr(Minus, e1, e2) -> 
    let (e1', varmap) = to_linear e1 varmap in
    let (e2', varmap) = to_linear e2 varmap in
    (BExpr(Minus, e1', e2'), varmap)
  | BExpr(Mul, e1, e2) -> 
    if is_linear e then
      let (e1', varmap) = to_linear e1 varmap in
      let (e2', varmap) = to_linear e2 varmap in
      (BExpr(Mul, e1', e2'), varmap)
    else if (is_constant e1) then 
      let (e2', varmap) = to_linear e2 varmap in
      (BExpr(Mul,e1,e2'),varmap)
    else if (is_constant e2) then
      let (e1', varmap) = to_linear e1 varmap in
      (BExpr(Mul,e1',e2),varmap)
    else
      replace_expr_with_temp e varmap
  | BExpr(Xor, e1, e2) -> 
    if is_boolexpr e then (e,varmap) 
    else if (is_boolexpr e1) then 
      let (e2', varmap) = replace_expr_with_temp e2 varmap in
      (BExpr(Xor,e1,e2'),varmap)
    else if (is_boolexpr e2) then 
      let (e1', varmap) = replace_expr_with_temp e1 varmap in
      (BExpr(Xor,e1',e2),varmap)
    else replace_expr_with_temp e varmap
  | BExpr(And, e1, e2) -> 
    if is_boolexpr e then (e,varmap) 
    else if (is_boolexpr e1) then 
      let (e2', varmap) = replace_expr_with_temp e2 varmap in
      (BExpr(And,e1,e2'),varmap)
    else if (is_boolexpr e2) then 
      let (e1', varmap) = replace_expr_with_temp e1 varmap in
      (BExpr(And,e1',e2),varmap)
    else replace_expr_with_temp e varmap
  | BExpr(Or, e1, e2) -> 
    if is_boolexpr e then (e,varmap) 
    else if (is_boolexpr e1) then 
      let (e2', varmap) = replace_expr_with_temp e2 varmap in
      (BExpr(Or,e1,e2'),varmap)
    else if (is_boolexpr e2) then 
      let (e1', varmap) = replace_expr_with_temp e1 varmap in
      (BExpr(Or,e1',e2),varmap)
    else replace_expr_with_temp e varmap
  | UExpr(Neg, e1) -> let (e1', varmap) = to_linear e1 varmap in
    (UExpr(Neg, e1'), varmap)
  | UExpr(Not, e1) -> if is_boolexpr e then (e,varmap) else replace_expr_with_temp e varmap
  | _ ->  (e, varmap)

let rec from_linear e varmap =
  match e with
  | BExpr(t,e1,e2) -> BExpr(t,from_linear e1 varmap,from_linear e2 varmap)
  | UExpr(t,e1) -> UExpr(t,from_linear e1 varmap)
  | Var x -> if BatString.starts_with x "rep" then BatMap.find x varmap else e
  | Constant _ -> e

let rec replace_not_zero_to_minus_one e =
  match e with
  | BExpr(t,e1,e2) -> BExpr(t,replace_not_zero_to_minus_one e1, replace_not_zero_to_minus_one e2)
  | UExpr(Not, Constant BV64.zero) -> UExpr(Neg, Constant BV64.one)
  | UExpr(t,e1) -> UExpr(t, replace_not_zero_to_minus_one e1)
  | Constant _ -> e
  | Var _ -> e

let rec list_minus l1 l2 = 
  match l1, l2 with
  | h1::[], h2::[] -> [h1-h2]
  | h1::t1, h2::t2 -> (h1-h2) :: list_minus t1 t2
  | _, _ -> raise BadParams

let rec list_add l1 l2 = 
  match l1, l2 with
  | h1::[], h2::[] -> [h1+h2]
  | h1::t1, h2::t2 -> (h1+h2) :: list_add t1 t2
  | _, _ -> raise BadParams

let rec list_update l idx v =
  match l with
  | h :: t -> if idx <= 0 then v :: t else h :: (list_update t (idx-1) v)
  | [] -> raise BadParams

let list_abs_sum l = 
  List.fold_left (fun n e -> n + (abs e)) 0 l

let rec get_coefficients expr is_minus res vnumber =
  let bit_length = pow 2 vnumber in
  match expr with 
  | BExpr(Mul, Constant c, Var x)
  | BExpr(Mul, Var x, Constant c) -> 
    let idx = ((int_of_string (BatString.lchop ~n:4 x))-1) in
    (* let _ = debug "idx : %d\n" idx in *)
    list_update res idx ((List.nth res idx) + (is_minus*(Bitvec.to_int c)))
  | BExpr(Minus, e1, e2) -> get_coefficients e2 (-is_minus) (get_coefficients e1 is_minus res vnumber) vnumber
  | UExpr(Neg, e1) -> get_coefficients e1 (-is_minus) res vnumber
  | BExpr(b,e1,e2) -> get_coefficients e2 is_minus (get_coefficients e1 is_minus res vnumber) vnumber
  | UExpr(u,e1) -> get_coefficients e1 is_minus res vnumber
  | Var x -> 
    let idx = ((int_of_string (BatString.lchop ~n:4 x))-1) in
    list_update res idx ((List.nth res idx) + is_minus)
  | Constant c -> list_update res (bit_length-1) (((List.nth res (bit_length-1))) + (-1 * (Bitvec.to_int c) * is_minus))
  | _ -> res

let rec list_to_exprlist l i vnumber =
  let bits = get_replaceable_bit vnumber in
  match l with
  | 0::t -> (list_to_exprlist t (i+1) vnumber)
  | h::t -> BExpr(Mul, Constant (BV64.int h), (List.nth bits i)) :: (list_to_exprlist t (i+1) vnumber)
  | [] -> [] 

let rec exprlist_to_expr l = 
  match l with
  | h::[] -> h
  | h::t -> BExpr(Plus,h,(exprlist_to_expr t))
  | _ -> raise BadParams

let rec dividable l1 l2 =
  let minus = list_minus l1 l2 in
  if (list_abs_sum l1) < (list_abs_sum minus) then 
    if (list_abs_sum l1) = 0 then 0 else raise Undividable
  else
    (dividable minus l2) + 1

let mult_list l n =
  List.map (fun e -> n*e) l

(* Evaluate 한 결과의 수가 모두 같으면 계수와 비트맵, 아니면 0과 빈리스트 *)
let rec check_mba_replaceable vnumber e res blist = 
  let bits = get_replaceable_bit vnumber in
  let (coe, reslist) = BatMap.foldi (fun k v (best_coe, result) -> 
    let term = (int_of_bit k) in
    let plus_one_term = list_minus res v in
    let minus_one_term = list_minus res (List.map (fun n -> (-n)) v) in
    let plus_dividable = try dividable res v with _ -> 0 in
    let minus_dividable = try dividable res (List.map (fun n -> (-n)) v) with _ -> 0 in
    if plus_dividable > 0 then 
      ((list_minus res (mult_list v plus_dividable)), (list_update blist term ((List.nth blist term)+plus_dividable)))
    else if minus_dividable > 0 then 
      ((list_minus res (mult_list (List.map (fun n -> (-n)) v) minus_dividable)), (list_update blist term ((List.nth blist term)-minus_dividable)))
    else
      let abs_sum_coe = list_abs_sum res in
      let abs_sum_plus = list_abs_sum plus_one_term in
      let abs_sum_minus = list_abs_sum minus_one_term in
      (* let _ = debug "applying vat %d \n" term in
      let _ = debug "listlen : %d\n" (List.length res) in
      let _ = pprint_intlist res in
      let _ = pprint_intlist v in
      let _ = debug "coe %d plus %d minus %d best %d\n" abs_sum_coe abs_sum_plus abs_sum_minus (list_abs_sum best_coe) in *)
      let (best_coe', result') = if (list_abs_sum best_coe) <= abs_sum_plus then (best_coe, result) 
        else (plus_one_term, (list_update blist term ((List.nth blist term)+1))) in
      let (best_coe2, result2) = if (list_abs_sum best_coe') <= abs_sum_minus then (best_coe', result')  
        else (minus_one_term, (list_update blist term ((List.nth blist term)-1))) in
      (best_coe2, result2)
  ) (basis_of_bittable vnumber) (res, blist) in
  (* let _ = debug "cardinal : %d\n" (List.length reslist) in
  let _ = debug "resssum : %d\n" (list_abs_sum res) in
  let _ = debug "coesum : %d\n" (list_abs_sum coe) in
  let _ = pprint_intlist reslist in *)
  if (list_abs_sum res) <= (list_abs_sum coe) then
    let rlist = list_to_exprlist reslist 0 vnumber in
    if (List.length rlist) < 1 then
      (* let _ = debug "There's no replacement\n" in *)
      e
    else if (List.length rlist) = 1 then 
      List.hd rlist
    else 
      (* let _ = debug "WE found replacement\n" in *)
      exprlist_to_expr rlist 
  else
    check_mba_replaceable vnumber e coe reslist
  (* 만약 res 결과가 나으면 한번 더 호출 아니면 BatMap -> expr*)

let reduce_mba_with_bool e vnumber = 
  let bit_length = pow 2 vnumber in
  let table_length = pow 2 bit_length in
  let to_bool = check_mba_replaceable vnumber e (get_coefficients e 1 (pad_list [] bit_length) vnumber) (pad_list [] table_length) in
  let orig = tempvar_to_expr e vnumber in
  let mba = tempvar_to_expr to_bool vnumber in
  let _ = Utils.to_smt_file (minus_pos_to_neg_postive orig) (minus_pos_to_neg_postive mba) (BatSet.union (set_of_var orig) (set_of_var mba)) "64" in
	if Utils.ask_smt false then 
    to_bool 
  else e

let rec remove_zeros expr =
  let zero = Constant BV64.zero in
  match expr with
  | BExpr(And,e1,e2) -> if (equal_expr e1 zero) || (equal_expr e2 zero) then zero else BExpr(And,remove_zeros e1,remove_zeros e2)
  | BExpr(Mul,e1,e2) -> if (equal_expr e1 zero) || (equal_expr e2 zero) then zero else BExpr(Mul,remove_zeros e1,remove_zeros e2)
  | BExpr(Plus,e1,e2) -> if (equal_expr e1 zero) then e2 else if (equal_expr e2 zero) then e1 else BExpr(Plus,remove_zeros e1,remove_zeros e2)
  | BExpr(Minus,e1,e2) -> if (equal_expr e1 zero) then e2 else if (equal_expr e2 zero) then e1 else BExpr(Minus,remove_zeros e1,remove_zeros e2)
  | BExpr(Or,e1,e2) -> if (equal_expr e1 zero) then e2 else if (equal_expr e2 zero) then e1 else BExpr(Or,remove_zeros e1,remove_zeros e2)
  | BExpr(Xor,e1,e2) -> if (equal_expr e1 zero) then e2 else if (equal_expr e2 zero) then e1 else BExpr(Xor,remove_zeros e1,remove_zeros e2)
  | UExpr(Not, Constant BV64.zero) -> Constant (BV64.int (-1))
  | UExpr(Neg, Constant BV64.zero) -> zero
  | _ -> expr

let mba_blast expr = 
  let (target, rvarmap) = to_linear expr BatMap.empty in
  if not (is_reducible target) then (false, expr) 
  else
    let vnumber = BatSet.cardinal (set_of_var target) in
    if vnumber = 0 then (true, Constant (evaluate_bitvec expr BatMap.empty))
    else
      let btb = basis_of_bit vnumber in
      let (cexpr, varmap) = replace_to_varname target in
      let reduced = reduce_bool_with_mba cexpr vnumber in
      let tempvar = to_temp_var reduced vnumber in 
      if z3_simplify tempvar then 
        let res = Utils.parse_simplify () in
        (* let _ = debug "After Simplify : %s\n" (string_of_expr res) in *)
        let res' = reduce_mba_with_bool res vnumber in
        (* let _ = debug "After MBA -> Bool : %s\n" (string_of_expr res') in *)
        let res' = tempvar_to_expr res' vnumber in
        (* let _ = debug "After Simplify\n" in *)
        let res' = varname_to_original res' varmap in
        (* let _ = debug "After Simplify\n" in *)
        let res' = from_linear res' rvarmap in
        let res' = if BatSet.is_empty (set_of_var res') then Constant (evaluate_bitvec res' BatMap.empty) else res' in
        (true, remove_zeros res')
      else
        (false, expr) 

let replace_map_solver e = 
  let setvar = set_of_var e in
  let varlist = ["x"; "y"; "z"; "t"] in
  let (idx,(varmap,revmap)) = BatSet.fold (fun x (i,(vm,rm)) ->
    let to_var = (List.nth varlist i) in
    (i+1,((BatMap.add to_var x vm), (BatMap.add x to_var rm)))
    ) setvar (0,(BatMap.empty,BatMap.empty))
  in
  (varmap,revmap)

let to_poly e =
  let varnum = BatSet.cardinal (set_of_var e) in 
  if varnum > 3 then (BatMap.empty, BatMap.empty) else
  let varlist = [(Var "x");(Var "y");(Var "z");(Var "t")] in
  let rec nonpoly_expmap e' repmap revmap =
    let newnum = varnum + (BatMap.cardinal repmap) in
    if newnum > 4 then (BatMap.empty, BatMap.empty) else
    match e' with
    | UExpr(Neg,e1) -> let (new_repmap, new_revmap) = if not (is_poly_term e1) then
        let varn = (List.nth varlist (newnum-1)) in
        if BatMap.mem e1 repmap then (repmap, revmap) else (BatMap.add e1 varn repmap, BatMap.add varn e1 revmap) 
      else (repmap, revmap) in
      (new_repmap, new_revmap)
    | UExpr(Not,e1) -> 
      let (new_repmap, new_revmap) = if not (is_boolexpr2 e1) then
        let varn = (List.nth varlist (newnum-1)) in
        if BatMap.mem e1 repmap then (repmap, revmap) else (BatMap.add e1 varn repmap, BatMap.add varn e1 revmap) 
      else (repmap, revmap) in
      (new_repmap, new_revmap)
    | BExpr(And,e1,e2)
    | BExpr(Or,e1,e2)
    | BExpr(Xor,e1,e2) -> 
      let (new_repmap, new_revmap) = if not (is_boolexpr2 e1) then
        let varn = (List.nth varlist (newnum-1)) in
        if BatMap.mem e1 repmap then (repmap, revmap) else (BatMap.add e1 varn repmap, BatMap.add varn e1 revmap) 
      else (repmap, revmap) in
      let newnum = varnum + (BatMap.cardinal repmap) in
      let (new_repmap, new_revmap) = if not (is_boolexpr2 e2) then
        let varn = (List.nth varlist (newnum-1)) in
        if BatMap.mem e2 repmap then (repmap, revmap) else (BatMap.add e2 varn repmap, BatMap.add varn e2 revmap) 
      else (repmap, revmap) in
      (new_repmap, new_revmap)
    | BExpr(Mul,e1,e2) -> 
      let (new_repmap, new_revmap) = if not (is_poly_term e1) then
        let varn = (List.nth varlist (newnum-1)) in
        if BatMap.mem e1 repmap then (repmap, revmap) else (BatMap.add e1 varn repmap, BatMap.add varn e1 revmap) 
      else (repmap, revmap) in
      let newnum = varnum + (BatMap.cardinal repmap) in
      let (new_repmap, new_revmap) = if not (is_poly_term e2) then
        let varn = (List.nth varlist (newnum-1)) in
        if BatMap.mem e2 repmap then (repmap, revmap) else (BatMap.add e2 varn repmap, BatMap.add varn e2 revmap) 
      else (repmap, revmap) in
      (new_repmap, new_revmap)
    | BExpr(Plus,e1,e2) 
    | BExpr(Minus,e1,e2) ->
      let rpm, rvm = nonpoly_expmap e1 repmap revmap in
      nonpoly_expmap e2 rpm rvm
    | _ -> (BatMap.empty, BatMap.empty)
  in
  nonpoly_expmap e BatMap.empty BatMap.empty


let rec replace_vars e varmap =
  match e with
  | BExpr(b,e1,e2) -> BExpr(b,replace_vars e1 varmap, replace_vars e2 varmap)
  | UExpr(u,e1) -> UExpr(u,replace_vars e1 varmap)
  | Constant _ -> e
  | Var x -> if BatMap.mem x varmap then (Var (BatMap.find x varmap)) else (Var x)

let rec replace_exprs e varmap =
  if BatMap.mem e varmap then BatMap.find e varmap else  
  match e with
  | BExpr(b,e1,e2) -> BExpr(b,replace_exprs e1 varmap, replace_exprs e2 varmap)
  | UExpr(u,e1) -> UExpr(u,replace_exprs e1 varmap)
  | Constant _ -> e
  | Var _ -> e

let rec count_subexpr e target = 
  if (size_of_expr e) < (size_of_expr target) then 0
  else if equal_expr e target then 1 else 
  match e with
  | BExpr(b,e1,e2) -> (count_subexpr e1 target) + (count_subexpr e2 target)
  | UExpr(u,e1) -> (count_subexpr e1 target)
  | _ -> 0

let sub_common_expr e = 
  if (BatSet.cardinal (set_of_var e)) >= 4 then (Var "var_that_n3v3r_ex1st") else
  let subexprs = get_all_subexpr e BatSet.empty in
  let count_subset = BatSet.map (fun se -> ((count_subexpr e se), se) ) subexprs in
  let count_subset = BatSet.filter (fun (c,se) -> c > 1 && (size_of_expr se) > 1) count_subset in
  if BatSet.is_empty count_subset then (Var "var_that_n3v3r_ex1st") else
  let (maxcount, commonexpr) = BatSet.fold (fun (c1,se1) (mc, mse) -> 
    if (size_of_expr se1)*c1 = (size_of_expr mse)*mc then if (size_of_expr se1) > (size_of_expr mse) then (c1,se1) else (mc,mse)
    else if  (size_of_expr se1)*c1 > (size_of_expr mse)*mc then (c1,se1)
    else (mc, mse)
  ) count_subset (BatSet.any count_subset) in
  commonexpr


let rec mbasolver exprr =
  if (size_of_expr exprr) < 3 then (false, exprr) else
  if (BatSet.cardinal (set_of_var exprr)) > 4 then (false, exprr) else
  let expr = (replace_plusneg_to_minus exprr) in
  (* TODO : Implement var replace and subexpr replace *)
  let sube = (sub_common_expr expr) in 
  let _ = debug "The expr : %s\n" (string_of_expr2 expr) in
  let _ = debug "Common expr : %s\n" (string_of_expr2 sube) in
  let expr2 = replace_exprs expr (BatMap.add sube (Var "tempvar1") BatMap.empty) in
  let (varmap, revmap) = (replace_map_solver expr) in
  let (varmap2, revmap2) = (replace_map_solver expr2) in
  let replaced = replace_vars expr revmap in
  let replaced2 = replace_vars expr2 revmap2 in
  if (not (is_poly replaced)) && (not (is_poly replaced2)) then 
    let _ = debug "its not poly" in
    (false, exprr)
  else
    let succ = Utils.run_lsolver (string_of_expr2 replaced) (if (is_linear replaced) then "_poly" else "_poly") in
    let res = if succ then try Utils.parse_linear true with _ -> (Var "var_that_n3v3r_ex1st") else (Var "var_that_n3v3r_ex1st") in 
    let succ2 = Utils.run_lsolver (string_of_expr2 replaced2) (if (is_linear replaced2) then "_poly" else "_poly") in
    let res2 = if succ2 then try Utils.parse_linear true with _ -> (Var "var_that_n3v3r_ex1st") else (Var "var_that_n3v3r_ex1st") in 
    if (not succ) && (not succ2) then (false, exprr)
    else 
      let replaced_res = replace_vars res varmap in
      let replaced_res2 = replace_vars res2 varmap2 in
      let expr3 = replace_exprs replaced_res2 (BatMap.add (Var "tempvar1") sube BatMap.empty) in
      if succ && (not succ2) then (true, replaced_res)
      else if (not succ) && succ2 then (true, expr3)
      else (true, if (size_of_expr replaced_res) > (size_of_expr expr3) then expr3 else replaced_res)


