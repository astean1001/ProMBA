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
open CilHelper

module BV64 = Bitvec.M64 

exception BadCode
exception Mismatch
exception ReplaceFailed
exception NotImplemented

let debug_out = ref stderr 

let ruleapply = ref 0

type id = string 

type constant = Bitvec.t

type bop =
| Plus  
| Minus
| Mul
| Xor 
| And
| Or
| LShift
| RShift
| Div
| Mod

type uop =
| Neg
| Not


type expr = 
| Constant of constant
| BExpr of bop * expr * expr
| UExpr of uop * expr
| Var of id

type nexpr = 
| LegacyExpr of expr
| NExpr of bop * (expr BatList.t)

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

let rec set_of_int i =
  if i = 0 then BatSet.empty
  else BatSet.add i (set_of_int (i-1))

let rec minus_pos_to_neg_postive e = 
  match e with
  | Constant c -> if c < BV64.zero then UExpr(Neg, Constant (Bv64.neg c)) else e
  | BExpr (b, e1, e2) -> BExpr (b, minus_pos_to_neg_postive e1, minus_pos_to_neg_postive e2)
  | UExpr (u, e1) -> UExpr (u, minus_pos_to_neg_postive e1)
  | Var _ -> e

let rec expr_of_cil cexpr = 
  match cexpr with
  | Const (CInt64 (i, _, _)) -> Constant(BV64.int64 i)
  | Lval l -> Var (CilHelper.s_lv l)
  | CastE (t,e) -> (expr_of_cil e)
  | UnOp (u, e, _) -> 
    let op = 
      match u with
      | Neg -> Neg
      | BNot -> Not
      | LNot -> Not
    in
    UExpr(op, (expr_of_cil e))
  | BinOp (b, e1, e2, _) -> 
    let op = 
      match b with
      | PlusA -> Plus
      | PlusPI -> Plus
      | IndexPI -> Plus
      | MinusA -> Minus
      | MinusPI -> Minus
      | MinusPP -> Minus
      | Mult -> Mul
      | Shiftlt -> LShift
      | Shiftrt -> RShift
      | Div -> Div
      | Mod -> Mod
      | BAnd -> And
      | BXor -> Xor
      | BOr -> Or
      | LAnd -> And
      | LOr -> Or 
    in
    BExpr(op, (expr_of_cil e1), (expr_of_cil e2))
  | _ -> let _ = debug "expr_of_cil: Cil.Expr has unsupported expression!/n" in assert false


let string_of_bop b =
  match b with
  | Plus -> "+"
  | Minus -> "-"
  | Mul -> "*"
  | Div -> "/"
  | Xor -> "^"
  | And -> "&"
  | Or -> "|"
  | Mod -> "%"
  | LShift -> "<<"
  | RShift -> ">>"

let string_of_uop u = 
  match u with
  | Neg -> "-"
  | Not -> "~"

let rec string_of_expr e = 
  match e with
  | Constant c -> Int64.to_string (Bitvec.to_int64 c)
  | BExpr (b, e1, e2) -> "(" ^ (string_of_expr e1) ^ " " ^ (string_of_bop b) ^ " " ^ (string_of_expr e2) ^ ")"
  | UExpr (u, e1) -> "(" ^ (string_of_uop u) ^ " " ^ (string_of_expr e1) ^ ")"
  | Var v -> v

let rec string_of_expr2 e = 
  match e with
  | Constant c -> Int64.to_string (Bitvec.to_int64 c)
  | BExpr (Xor, e1, e2) -> "(" ^ (string_of_expr2 e1) ^ (string_of_bop Xor)  ^ (string_of_expr2 e2) ^ ")"
  | BExpr (And, e1, e2) -> "(" ^ (string_of_expr2 e1)  ^ (string_of_bop And)  ^ (string_of_expr2 e2) ^ ")"
  | BExpr (Or, e1, e2) ->  "(" ^ (string_of_expr2 e1)  ^ (string_of_bop Or) ^ (string_of_expr2 e2) ^ ")"
  | BExpr (b, e1, e2) -> (string_of_expr2 e1)  ^ (string_of_bop b)  ^ (string_of_expr2 e2)     
  | UExpr (u, e1) -> (string_of_uop u) ^ (string_of_expr2 e1)
  | Var v -> v

let rec size_of_expr e =
  let e' = minus_pos_to_neg_postive e in
  let rec size_of_expr_inner es = 
    match es with
    | Constant _ -> 1
    | BExpr (_, e1, e2) -> (size_of_expr_inner e1) + (size_of_expr_inner e2) + 1
    | UExpr (_, e1) -> (size_of_expr_inner e1) + 1
    | Var _ -> 1
  in
  size_of_expr_inner e'

let list_of_expr e =
  let rec addr_of_expr e curr_addr = 
    match e with
    | Constant _ -> [] (* We ignore constants for node selection *)
    | BExpr (_, e1, e2) -> [curr_addr] @ (addr_of_expr e1 (curr_addr@[0])) @ (addr_of_expr e2 (curr_addr@[1]))
    | UExpr (_, e1) -> [curr_addr] @ (addr_of_expr e1 (curr_addr@[0]))
    | Var _ -> [] (* We ignore variables for node selection *)
  in
  addr_of_expr e []

let rec expr_of_addr e addr = 
    match e,addr with
    | _, [] -> e
    | BExpr (_, e1, e2), hd::[] -> if hd = 0 then e1 else e2
    | BExpr (_, e1, e2), hd::tl -> if hd = 0 then (expr_of_addr e1 tl) else (expr_of_addr e2 tl)
    | UExpr (_, e1), 0::[] -> e1
    | UExpr (_, e1), 0::tl -> expr_of_addr e1 tl
    | _, _ -> raise BadCode

let size_of_map m = 
    BatMap.fold (fun _ i -> i+1) m 0

let set_of_var e = 
    let rec set_of_var_inner e init = 
        match e with
        | Constant _ -> init
        | BExpr (_, e1, e2) -> (set_of_var_inner e2 (set_of_var_inner e1 init))
        | UExpr (_, e1) -> (set_of_var_inner e1 init)
        | Var v -> BatSet.add v init
    in
    set_of_var_inner e BatSet.empty

let set_of_const e = 
    let rec set_of_const_inner e init = 
        match e with
        | Constant c -> BatSet.add c init
        | BExpr (_, e1, e2) -> (set_of_const_inner e2 (set_of_const_inner e1 init))
        | UExpr (_, e1) -> (set_of_const_inner e1 init)
        | Var _ -> init
    in
    set_of_const_inner e BatSet.empty

let rec height_of_expr e = 
  match e with
  | Constant _ -> 1
  | BExpr(b,e1,e2) -> (max (height_of_expr e1) (height_of_expr e2)) + 1
  | UExpr (u, e1) -> (height_of_expr e1) + 1
  | Var _ -> 1
  

let limit e height = 
    let rec limit_inner e height varmap rev_varmap =
        match e with
        | Constant _ -> e, varmap, rev_varmap
        | BExpr (b, e1, e2) -> if height = 0 
            then 
                if BatMap.mem e rev_varmap 
                then (* Substitute if variable already exist *)
                    let varname = BatMap.find e rev_varmap in
                    (Var varname), varmap, rev_varmap
                else
                    let varname = "tempvar"^(string_of_int (size_of_map varmap)) in
                    (Var varname), (BatMap.add varname e varmap), (BatMap.add e varname rev_varmap) 

            else 
                let e1', varmap1, rev_varmap1 = limit_inner e1 (height-1) varmap rev_varmap in
                let e2', varmap2, rev_varmap2 = limit_inner e2 (height-1) varmap1 rev_varmap1 in
                BExpr (b, e1', e2'), varmap2, rev_varmap2
        | UExpr (u, e1) -> if height = 0 
            then 
                if BatMap.mem e rev_varmap 
                then (* Substitute if variable already exist *)
                    let varname = BatMap.find e rev_varmap in
                    (Var varname), varmap, rev_varmap
                else
                    let varname = "tempvar"^(string_of_int (size_of_map varmap)) in
                    (Var varname), (BatMap.add varname e varmap), (BatMap.add e varname rev_varmap) 

            else 
                let e1', varmap1, rev_varmap1 = limit_inner e1 (height-1) varmap rev_varmap in
                UExpr (u, e1'), varmap1, rev_varmap1
        | Var _ -> e, varmap, rev_varmap
    in
    limit_inner e height BatMap.empty BatMap.empty

let bitvec_of_int c = Bitvec.to_string c

let bitvec_length c =
  if c <= (BV64.int64 16L)  then "4"
  else if c <= (BV64.int64 256L) then "8"
  else if c <= (BV64.int64 65536L) then "16"
  else if c <= (BV64.int64 4294967296L) then "32"
  else "64"

let bitvec_n_of_int n c = 
  if n = "4" then Printf.sprintf "#x%01x" (Bitvec.to_int c)
  else if n = "8" then Printf.sprintf "#x%02x" (Bitvec.to_int c)
  else if n = "16" then  Printf.sprintf "#x%04x" (Bitvec.to_int c)
  else if n = "32" then  Printf.sprintf "#x%08x" (Bitvec.to_int c)
  else  Bitvec.to_string c

let sygus_of_bop b =
  match b with
  | Plus -> "bvadd"
  | Minus -> "bvsub"
  | Mul -> "bvmul"
  | Div -> "bvsdiv"
  | Mod -> "bvsrem" 
  | Xor -> "bvxor"
  | And -> "bvand"
  | Or -> "bvor"
  | LShift -> "bvshl"
  | RShift -> "bvlshr"

let sygus_of_uop u = 
  match u with
  | Neg -> "bvneg"
  | Not -> "bvnot"

let rec sygus_of_expr_nbit e nbit = 
  match e with
  | Constant c -> bitvec_n_of_int nbit c
  | BExpr (b, e1, e2) -> "(" ^ (sygus_of_bop b) ^ " " ^ (sygus_of_expr_nbit e1 nbit) ^ " " ^ (sygus_of_expr_nbit e2 nbit) ^ ")"
  | UExpr (u, e1) -> "(" ^ (sygus_of_uop u) ^ " " ^ (sygus_of_expr_nbit e1 nbit) ^ ")"
  | Var v -> v

let rec sygus_of_expr e = 
  match e with
  | Constant c -> bitvec_of_int c
  | BExpr (b, e1, e2) -> "(" ^ (sygus_of_bop b) ^ " " ^ (sygus_of_expr e1) ^ " " ^ (sygus_of_expr e2) ^ ")"
  | UExpr (u, e1) -> "(" ^ (sygus_of_uop u) ^ " " ^ (sygus_of_expr e1) ^ ")"
  | Var v -> v

let rec equal_expr e1 e2 = 
    match e1, e2 with
    | Constant c, Constant c' -> c = c'
    | BExpr (b, e1, e2), BExpr (b', e1', e2') -> b = b' && (equal_expr e1 e1') && (equal_expr e2 e2')
    | UExpr (u, e1), UExpr (u', e1') -> u = u' && (equal_expr e1 e1')
    | Var v, Var v' -> v = v'
    | _, _ -> false

let rec substitute e varmap = 
  let rec substitute_inner e' varmap' =
    match e' with
    | Constant _ -> e'
    | BExpr (b, e1, e2) -> BExpr(b, (substitute_inner e1 varmap'), (substitute_inner e2 varmap'))
    | UExpr (u, e1) -> UExpr(u, (substitute_inner e1 varmap'))
    | Var v -> if BatMap.mem v varmap' then BatMap.find v varmap' else e'
  in
  let ee = substitute_inner e varmap in 
  if BatSet.cardinal (BatSet.filter (fun en -> BatMap.mem en varmap ) (set_of_var ee)) > 0 then 
    substitute ee varmap
  else ee 

let rec replace orig rep addr = 
    match orig, addr with
    | _, [] -> rep
    | BExpr (b, e1, e2), hd::[] -> if hd = 0 then BExpr(b, rep, e2) else BExpr(b, e1, rep)
    | BExpr (b, e1, e2), hd::tl -> if hd = 0 then BExpr(b, (replace e1 rep tl), e2) else BExpr(b, e1, (replace e2 rep tl))
    | UExpr (u, _), 0::[] -> UExpr(u, rep)
    | UExpr (u, e1), 0::tl -> UExpr(u, (replace e1 rep tl))
    | _, _ -> raise BadCode

let rec replace_expr orig rep pos = 
  if equal_expr orig pos then rep 
  else match orig with
  | BExpr(b,e1,e2) -> BExpr(b,replace_expr e1 rep pos, replace_expr e2 rep pos)
  | UExpr(u,e1) -> UExpr(u, replace_expr e1 rep pos)
  | _ -> orig

let is_var_or_constant e = 
  match e with 
  | Constant _ -> true
  | Var _ -> true
  | _ -> false

let rec get_all_subexpr e resSet = 
  match e with
  | Constant _ -> BatSet.add e resSet
  | BExpr (b, e1, e2) -> get_all_subexpr e2 (get_all_subexpr e1 (BatSet.add e resSet))
  | UExpr (u, e1) -> get_all_subexpr e1 (BatSet.add e resSet)
  | Var _ -> BatSet.add e resSet

let add_rule orig deob ruleset = 
    if (size_of_expr orig) < (size_of_expr deob) then BatSet.add (deob, orig) ruleset else
    if (equal_expr orig deob) then ruleset
    else BatSet.add (orig, deob) ruleset
    
(* p is a set of matching problem (Left Hand Side of Rule * Expr) *)
(* s is a set of equation in matched form (BatMap (Expr a, Expr b), a = b Equation) *)
(* Thie function returns s *)
let rec match_rule p s =
  if BatSet.is_empty p then s
  else 
    let p_elem, p' = BatSet.pop p in
    match (fst p_elem), (snd p_elem) with
    | Constant c, Constant c' -> if c = c' then match_rule p' s (* Trivial *)
      else raise Mismatch (* Symbol Clash *)
    | BExpr (b, e1, e2), BExpr (b', e1', e2') -> 
      if b = b' then (* Decomposition *)
        let new_p = BatSet.add (e2, e2') (BatSet.add (e1, e1') p') in
        match_rule new_p s
      else raise Mismatch (* Symbol Clash *)
    | UExpr (u, e1), UExpr (u', e1') -> 
      if u = u' then (* Decomposition *)
        let new_p = BatSet.add (e1, e1') p' in
        match_rule new_p s
      else raise Mismatch (* Symbol Clash *)
    | Var v, _ -> 
      if BatMap.mem (fst p_elem) s then
        if equal_expr (BatMap.find (fst p_elem) s) (snd p_elem) then (* Variable Elimination *)
          match_rule p' s
        else
          raise Mismatch (* Merging Clash *)
      else 
        let new_s = BatMap.add (fst p_elem) (snd p_elem) s in (* Variable Elimination *)
        match_rule p' new_s
    | _, _ -> raise Mismatch (* Symbol-Variable Clash *)

let rec apply_rules e ruleset mem =
    (* Rule (Orig Expr, Deob Expr)*)
    let rec replace_with_rule s expr = 
      if BatMap.mem expr s then BatMap.find expr s 
      else 
        match expr with
        | BExpr (b, e1, e2) -> BExpr(b, (replace_with_rule s e1), (replace_with_rule s e2))
        | UExpr (u, e1) -> UExpr(u, (replace_with_rule s e1))
        | _ -> expr (* It should be called on perfect match *)
    in
    (* apply_rule returns applied expr*)
    let rec apply_rule e rule = 
      let orig_expr = fst rule in
      let deob_expr = snd rule in 
      let s = try match_rule (BatSet.add (orig_expr, e) BatSet.empty) BatMap.empty with _ -> BatMap.empty in
      if BatMap.is_empty s then 
        match e with
        | Constant _ -> e
        | BExpr (b, e1, e2) -> BExpr(b, (apply_rule e1 rule), (apply_rule e2 rule))
        | UExpr (u, e1) -> UExpr(u, (apply_rule e1 rule))
        | Var _ -> e
      else 
        let _ = ruleapply := !ruleapply + 1 in 
        replace_with_rule s deob_expr
    in
    let applyed = BatSet.fold (fun r e -> apply_rule e r) ruleset e in
    if BatSet.mem applyed mem then applyed else apply_rules applyed ruleset (BatSet.add applyed mem)


(* Take expr and inputMap (String -> Int) and give evaluation result  *)
let rec evaluate expr inputMap = 
  match expr with
  | Constant c -> Unsigned.UInt64.of_int64 (Bitvec.to_int64 c)
  | BExpr(Plus, e1, e2) -> Unsigned.UInt64.add (evaluate e1 inputMap) (evaluate e2 inputMap)
  | BExpr(Minus, e1, e2) -> Unsigned.UInt64.sub (evaluate e1 inputMap) (evaluate e2 inputMap)
  | BExpr(Mul, e1, e2) -> Unsigned.UInt64.mul (evaluate e1 inputMap) (evaluate e2 inputMap)
  | BExpr(Xor, e1, e2) -> Unsigned.UInt64.logxor (evaluate e1 inputMap) (evaluate e2 inputMap)
  | BExpr(And, e1, e2) -> Unsigned.UInt64.logand (evaluate e1 inputMap) (evaluate e2 inputMap)
  | BExpr(Or, e1, e2) -> Unsigned.UInt64.logor (evaluate e1 inputMap) (evaluate e2 inputMap)
  | BExpr(Div, e1, e2) -> Unsigned.UInt64.div (evaluate e1 inputMap) (evaluate e2 inputMap)
  | BExpr(RShift, e1, e2) -> Unsigned.UInt64.shift_right (evaluate e1 inputMap) (Unsigned.UInt64.to_int (evaluate e2 inputMap))
  | BExpr(Mod, e1, e2) -> Unsigned.UInt64.rem (evaluate e1 inputMap) (evaluate e2 inputMap)
  | BExpr(LShift, e1, e2) -> Unsigned.UInt64.shift_left (evaluate e1 inputMap) (Unsigned.UInt64.to_int (evaluate e2 inputMap))
  | UExpr(Neg, e1) -> Unsigned.UInt64.sub (Unsigned.UInt64.zero) (evaluate e1 inputMap)
  | UExpr(Not, e1) -> Unsigned.UInt64.lognot (evaluate e1 inputMap)
  | Var v ->  Unsigned.UInt64.of_int (BatMap.find v inputMap)


  let rec evaluate_bitvec expr inputMap = 
    match expr with
    | Constant c -> c
    | BExpr(Plus, e1, e2) -> BV64.add (evaluate_bitvec e1 inputMap) (evaluate_bitvec e2 inputMap)
    | BExpr(Minus, e1, e2) -> BV64.sub (evaluate_bitvec e1 inputMap) (evaluate_bitvec e2 inputMap)
    | BExpr(Mul, e1, e2) -> BV64.mul (evaluate_bitvec e1 inputMap) (evaluate_bitvec e2 inputMap)
    | BExpr(Xor, e1, e2) -> BV64.logxor (evaluate_bitvec e1 inputMap) (evaluate_bitvec e2 inputMap)
    | BExpr(And, e1, e2) -> BV64.logand (evaluate_bitvec e1 inputMap) (evaluate_bitvec e2 inputMap)
    | BExpr(Or, e1, e2) -> BV64.logor (evaluate_bitvec e1 inputMap) (evaluate_bitvec e2 inputMap)
    | BExpr(Div, e1, e2) -> BV64.div (evaluate_bitvec e1 inputMap) (evaluate_bitvec e2 inputMap)
    | BExpr(RShift, e1, e2) -> BV64.rshift (evaluate_bitvec e1 inputMap) (evaluate_bitvec e2 inputMap)
    | BExpr(Mod, e1, e2) -> BV64.rem (evaluate_bitvec e1 inputMap) (evaluate_bitvec e2 inputMap)
    | BExpr(LShift, e1, e2) -> BV64.lshift (evaluate_bitvec e1 inputMap) (evaluate_bitvec e2 inputMap)
    | UExpr(Neg, e1) -> BV64.neg (evaluate_bitvec e1 inputMap)
    | UExpr(Not, e1) -> BV64.lnot (evaluate_bitvec e1 inputMap)
    | Var v ->  BV64.int (BatMap.find v inputMap)

let rec no_nonpoly e =
  match e with 
  | BExpr(LShift,_,_)
  | BExpr(RShift,_,_)
  | BExpr(Div,_,_)
  | BExpr(Mod,_,_) -> false
  | BExpr(_,e1,e2) -> (no_nonpoly e1) && (no_nonpoly e2)
  | UExpr(_,e1) -> (no_nonpoly e1)
  | _ -> true

let is_constant e = (BatSet.is_empty (set_of_var e) && (no_nonpoly e))

let rec is_boolexpr e = 
  match e with
  | Constant _ -> false
  | BExpr(And, e1, e2) -> (is_boolexpr e1) && (is_boolexpr e2)
  | BExpr(Or, e1, e2) -> (is_boolexpr e1) && (is_boolexpr e2)
  | BExpr(Xor, e1, e2) -> (is_boolexpr e1) && (is_boolexpr e2)
  | UExpr(Not, e1) -> is_boolexpr e1
  | Var v ->  true
  | _ -> false

let rec is_linear e = 
  match e with
  | Constant _ -> true (* Only Coefficient *)
  | BExpr(Plus, e1, e2) -> (is_linear e1) && (is_linear e2)
  | BExpr(Minus, e1, e2) -> (is_linear e1) && (is_linear e2)
  | BExpr(Mul, Constant _, e1) 
  | BExpr(Mul, e1, Constant _) 
    -> (is_boolexpr e1)
  | BExpr(Xor, e1, e2) -> is_boolexpr e
  | BExpr(And, e1, e2) -> is_boolexpr e
  | BExpr(Or, e1, e2) -> is_boolexpr e
  | UExpr(Neg, e1) -> is_linear e1
  | UExpr(Not, e1) -> is_boolexpr e
  | Var v ->  true
  | _ -> false

let rec is_boolexpr2 e = 
  match e with
  | Constant _ -> true
  | BExpr(And, e1, e2) -> (is_boolexpr2 e1) && (is_boolexpr2 e2)
  | BExpr(Or, e1, e2) -> (is_boolexpr2 e1) && (is_boolexpr2 e2)
  | BExpr(Xor, e1, e2) -> (is_boolexpr2 e1) && (is_boolexpr2 e2)
  | UExpr(Not, e1) -> is_boolexpr2 e1
  | UExpr(Neg, e1) -> (is_constant e1)
  | Var v ->  true
  | _ -> false

let rec is_linear2 e = 
  match e with
  | Constant _ -> true (* Only Coefficient *)
  | BExpr(Plus, e1, e2) -> (is_linear2 e1) && (is_linear2 e2)
  | BExpr(Minus, e1, e2) -> (is_linear2 e1) && (is_linear2 e2)
  | BExpr(Mul, e1, e2) -> ((is_boolexpr e1) && (is_constant e2)) || ((is_boolexpr e2) && (is_constant e1))
  | BExpr(Xor, e1, e2) -> is_boolexpr e
  | BExpr(And, e1, e2) -> is_boolexpr e
  | BExpr(Or, e1, e2) -> is_boolexpr e
  | UExpr(Neg, e1) -> is_linear2 e1
  | UExpr(Not, e1) -> is_boolexpr e
  | Var v ->  true
  | _ -> false

let rec evaluate_all_const_expr e = 
  if not !Options.evaluate_expr then e
  else if BatSet.is_empty (set_of_var e) then
      (Constant (evaluate_bitvec e BatMap.empty))
  else match e with
  | Constant c -> e
  | BExpr(b,e1,e2) -> BExpr(b,evaluate_all_const_expr e1,evaluate_all_const_expr e2)
  | UExpr(u,e1) -> UExpr(u,evaluate_all_const_expr e1)
  | Var v -> e

let limit2 e height =
  let rec find_limit_target e height =
    match e with
    | Constant _ 
    | Var _ -> BatSet.empty
    | BExpr(b, e1, e2) -> if height = 0 then (BatSet.add e BatSet.empty)
                          else BatSet.union (find_limit_target e1 (height-1)) (find_limit_target e2 (height-1))
    | UExpr(u, e1) -> if height = 0 then (BatSet.add e BatSet.empty)
                      else find_limit_target e1 (height-1)
  in
  let rec limit2_inner ei heighti varmap rev_varmap = 
    let target_set = find_limit_target ei heighti in
    let smallest = try BatSet.fold (fun e se -> if (size_of_expr e) < (size_of_expr se) then e else se ) target_set (BatSet.any target_set) with _ -> (Constant BV64.zero) in
    let varname = "tempvar" ^ (string_of_int (BatMap.cardinal varmap)) in
    if not (equal_expr smallest (Constant BV64.zero)) then 
      limit2_inner (replace_expr ei (Var varname) smallest) heighti (BatMap.add varname smallest varmap) (BatMap.add smallest varname rev_varmap)
    else ei, varmap, rev_varmap
  in
  limit2_inner e height BatMap.empty BatMap.empty

  let limit_by_size e size =
    let rec limit_by_size_inner ei size varmap rev_varmap = 
      if size < 2 then ei, varmap, rev_varmap else
      match ei with
      | Var _
      | Constant _ ->  ei, varmap, rev_varmap
      | BExpr(b,e1,e2) ->
        if (size_of_expr ei) < size then ei, varmap, rev_varmap
        else if (size_of_expr e1) + 2 <= size then 
          let e2', varmap', revmap' = limit_by_size_inner e2 (size - 1 - (size_of_expr e1)) varmap rev_varmap in
          BExpr(b,e1,e2'), varmap', revmap'
        else if (size_of_expr e2) + 2 <= size then
          let e1', varmap', revmap' = limit_by_size_inner e1 (size - 1 - (size_of_expr e2)) varmap rev_varmap in
          BExpr(b,e1',e2), varmap', revmap'
        else
          let varname = "tempvar" ^ (string_of_int (BatMap.cardinal varmap)) in
          (Var varname), (BatMap.add varname ei varmap), (BatMap.add ei varname rev_varmap)
      | UExpr(u,e1) -> 
        if (size_of_expr ei) < size then ei, varmap, rev_varmap
        else
          let varname = "tempvar" ^ (string_of_int (BatMap.cardinal varmap)) in
          (Var varname), (BatMap.add varname ei varmap), (BatMap.add ei varname rev_varmap)
    in
    limit_by_size_inner e size BatMap.empty BatMap.empty

let cnt = ref 0 
let new_var () = incr cnt; ("tempvar" ^ (string_of_int !cnt))

let rec limit_by_size e max_size max_var =
  let _ = assert (max_var > 0 && max_size > 0) in 
  let e_size = size_of_expr e in 
  let e_var = BatSet.cardinal (set_of_var e) in 
  if e_size <= max_size && e_var <= max_var then (e, BatMap.empty, BatMap.empty)
  else 
    if max_size = 1 || max_var = 1 then 
      let var = new_var () in
      (Var var, BatMap.add var e BatMap.empty, BatMap.add e var BatMap.empty)
    else
      let _ = assert (max_var > 1 && max_size > 1) in 
      match e with 
      | Var _ | Constant _ -> (e, BatMap.empty, BatMap.empty)
      | BExpr(b, e1, e2) -> 
        let e1_size = size_of_expr e1 in
        let e2_size = size_of_expr e2 in
        let e2_var = BatSet.cardinal (set_of_var e2) in
        let max_e1_size = (max ((max_size - 1) / 2) (max_size - e2_size - 1)) in 
        let max_e1_var = (max (max_var / 2) (max_var - e2_var)) in 
        let max_e1_size = if max_e1_size < 1 then 1 else max_e1_size in
        let max_e1_var = if max_e1_var < 1 then 1 else max_e1_var in
        let e1', varmap1, revmap1 = limit_by_size e1 max_e1_size max_e1_var in
        let e2' = substitute e2 varmap1 in
        let max_e2_size = (max_size - (size_of_expr e1') - 1) in 
        let max_e2_var = (max_var - (BatSet.cardinal (set_of_var e1'))) in 
        let max_e2_size = if max_e2_size < 1 then 1 else max_e2_size in
        let max_e2_var = if max_e2_var < 1 then 1 else max_e2_var in
        let e2', varmap2, revmap2 = limit_by_size e2' max_e2_size max_e2_var in
        (BExpr(b, e1', e2'), BatMap.union varmap1 varmap2, BatMap.union revmap1 revmap2)
      | UExpr(u, e1) -> 
        let e1', varmap1, revmap1 = limit_by_size e1 (max_size - 1) max_var in
        (UExpr(u, e1'), varmap1, revmap1)

let rec replace_minus_to_plusneg e = 
  match e with
  | BExpr(Minus,e1,e2) -> BExpr(Plus, replace_minus_to_plusneg e1, UExpr(Neg, replace_minus_to_plusneg e2))
  | BExpr(bop,e1,e2) -> BExpr(bop, replace_minus_to_plusneg e1, replace_minus_to_plusneg e2)
  | UExpr(uop, e1) -> UExpr(uop, replace_minus_to_plusneg e1)
  | _ -> e

let rec replace_plusneg_to_minus e =
  match e with
  | BExpr(Plus,e1,UExpr(Neg, Constant c)) -> BExpr(Plus,replace_plusneg_to_minus e1,UExpr(Neg, Constant c))
  | BExpr(Plus,e1,UExpr(Neg, e2)) -> BExpr(Minus,replace_plusneg_to_minus e1, replace_plusneg_to_minus e2)
  | BExpr(bop,e1,e2) -> BExpr(bop, replace_plusneg_to_minus e1, replace_plusneg_to_minus e2)
  | UExpr(uop, e1) -> UExpr(uop, replace_plusneg_to_minus e1)
  | _ -> e


let list_of_valuation varset =
  let rec valuation_inner varset reslist =
    if BatSet.is_empty varset then reslist
    else
      let target, resset = BatSet.pop varset in
      let newlist = List.fold_left (fun res bm -> [(BatMap.add target 0 bm);(BatMap.add target 1 bm)]@res) [] reslist in
      valuation_inner resset newlist
  in
  if BatSet.is_empty varset then []
  else 
    let target, resset = BatSet.pop varset in
    valuation_inner resset [(BatMap.add target 1 BatMap.empty);(BatMap.add target 0 BatMap.empty)]

let rec eliminate_minus e = 
  match e with
  | BExpr(Minus,e1,e2) -> BExpr(Plus, (eliminate_minus e1), UExpr(Neg, (eliminate_minus e2)))
  | BExpr(b,e1,e2) -> BExpr(b, (eliminate_minus e1), (eliminate_minus e2))
  | UExpr(u, e1) -> UExpr(u, (eliminate_minus e1))
  | _ -> e

let is_nary e =
  match e with 
  | BExpr (Mul,_,_) -> true
  | BExpr (Plus,_,_) -> true
  | BExpr (And,_,_) -> true
  | BExpr (Or,_,_) -> true
  | BExpr (Xor,_,_) -> true
  | _ -> false

let get_operands ne =
  match ne with
  | LegacyExpr e -> [e]
  | NExpr(op,el) -> el

let get_operands_expr e =
  if not (is_nary e) then BatList.cons e []
  else
    let rec get_operands_expr_inner e' op =
      match e' with
      | BExpr (op',e1,e2) -> 
        if op = op' then BatList.append (get_operands_expr_inner e1 op) (get_operands_expr_inner e2 op)
        else  BatList.cons e' []
      | _ -> BatList.cons e' []
    in
    match e with
    | BExpr (Mul,e1,e2) -> get_operands_expr_inner e Mul
    | BExpr (Plus,e1,e2) -> get_operands_expr_inner e Plus
    | BExpr (And,e1,e2) -> get_operands_expr_inner e And
    | BExpr (Or,e1,e2) -> get_operands_expr_inner e Or
    | BExpr (Xor,e1,e2) -> get_operands_expr_inner e Xor
    | _ -> raise BadCode

let nary_of_expr e =
  if not (is_nary e) then (LegacyExpr e)
  else
    match e with
    | BExpr (Mul,e1,e2) -> NExpr(Mul, (get_operands_expr e))
    | BExpr (Plus,e1,e2) -> NExpr(Plus, (get_operands_expr e))
    | BExpr (And,e1,e2) -> NExpr(And, (get_operands_expr e))
    | BExpr (Or,e1,e2) -> NExpr(Or, (get_operands_expr e))
    | BExpr (Xor,e1,e2) -> NExpr(Xor, (get_operands_expr e))
    | _ -> raise BadCode

(* 다시 원래 식으로 만들어서 되돌려 놓자. *)
let expr_of_nary ne = 
  match ne with
  | LegacyExpr e1 -> e1
  | NExpr(nop, elist) -> BatList.fold (fun e operand -> 
      BExpr(nop, e, operand)
    ) (BatList.hd elist) (BatList.tl elist)
 
let rec get_all_tuples n lst =
  if n <= 0 then [[]]
  else match lst with
    | [] -> []
    | x::xs ->
      let with_x = BatList.map (fun l -> x::l) (get_all_tuples (n-1) xs) in
      let without_x = get_all_tuples n xs in
      BatList.append with_x without_x
(* 모든 일부 식을 구하고 그 중에 하나를 골라 풀고 *)
let get_all_subexpr_nary ne operand_num = 
  match ne with
  | LegacyExpr e -> e::[]
  | NExpr(op,elist) -> BatList.map (fun l -> expr_of_nary (NExpr(op, l))) (get_all_tuples operand_num elist)

(* 대차해 준다음 *)
let replace_nary ne orig newexp = 
  let orig_operands = get_operands_expr orig in
  let removed_ne = 
    match ne with 
    | NExpr(op,el) -> NExpr(op, newexp::(BatList.fold (fun neops e -> 
      let _ = debug "Search expr : %s" (string_of_expr e) in
      BatList.remove neops e) el orig_operands) )
    | _ -> raise BadCode
  in
  removed_ne

let get_largest_linear_expr ne =
  (* 덧셈에 한해서 작동 *)
  match ne with
  | NExpr(Plus, el) -> 
    let linear_operands = BatList.filter (fun e -> is_linear e) el in
    if (BatList.length linear_operands) < 2 then raise BadCode
    else expr_of_nary (NExpr(Plus, linear_operands))
  | _ -> raise BadCode

let is_poly_term e = 
  match e with
  | Var _ 
  | Constant _ -> true
  | BExpr(Mul,_,_) -> BatList.fold (fun b e -> (is_boolexpr2 e) & b) true (get_operands_expr e)
  | BExpr(And,_,_)
  | BExpr(Or,_,_)
  | BExpr(Xor,_,_)
  | UExpr(Not,_) -> is_boolexpr2 e
  | _ -> false

let rec is_poly e =
  match e with
  | BExpr(Plus,e1,e2) 
  | BExpr(Minus,e1,e2) -> (is_poly e1) && (is_poly e2)
  | UExpr(Neg,e1) -> is_poly_term e1
  | _ -> is_poly_term e

let get_largest_expr eset = 
  BatSet.fold (fun e maxe -> if (size_of_expr e) > (size_of_expr maxe) then e else maxe ) eset (BatSet.any eset)

  let rec eliminate_coefficient_one e =
    match e with
    | BExpr(Mul,e1,e2) ->
       if e1 = Constant (BV64.one) then e2 else if e2 = Constant (BV64.one) then e1
       else BExpr(Mul, eliminate_coefficient_one e1, eliminate_coefficient_one e2)
    | BExpr(b,e1,e2) -> 
       BExpr(b, eliminate_coefficient_one e1, eliminate_coefficient_one e2)
    | UExpr(u,e1) -> UExpr(u, eliminate_coefficient_one e1)
    | _ -> e

let is_boolop e =
  match e with 
  | BExpr(And,_,_)
  | BExpr(Or,_,_)
  | BExpr(Xor,_,_)
  | UExpr(Not,_) -> true
  | _ -> false

let is_arithop e =
  match e with 
  | BExpr(Plus,_,_)
  | BExpr(Minus,_,_)
  | BExpr(Mul,_,_)
  | BExpr(Div,_,_)
  | BExpr(Mod,_,_)
  | BExpr(LShift,_,_)
  | BExpr(RShift,_,_)
  | UExpr(Neg,_) -> true
  | _ -> false

let rec count_alternation e = 
  match e with
  | BExpr(b,e1,e2) -> 
    (if ((is_boolop e1) && (is_arithop e2)) || ((is_boolop e2) && (is_arithop e1)) then 1 else 0) + (count_alternation e1) + (count_alternation e2)
  | UExpr(u,e1) -> (if ((is_boolop e) && (is_arithop e1)) || ((is_boolop e1) && (is_arithop e)) then 1 else 0) + (count_alternation e1)
  | _ -> 0