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
exception BadCode
let debug_out = ref stderr 

type id = string 

type constant = int64

type bop =
| Plus  
| Minus
| Mul
| Xor 
| And
| Or
| LShift

type uop =
| Neg
| Not

type expr = 
| Constant of constant
| BExpr of bop * expr * expr
| UExpr of uop * expr
| Var of id

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

let rec expr_of_cil cexpr = 
  match cexpr with
  | Const (CInt64 (i, _, _)) -> Constant(i)
  | Lval l -> Var (CilHelper.s_lv l)
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
      | BAnd -> And
      | BXor -> Xor
      | BOr -> Or
      | LAnd -> And
      | LOr -> Or 
    in
    BExpr(op, (expr_of_cil e1) (expr_of_cil e2))
  | _ -> let _ = debug "expr_of_cil: Cil.Expr has unsupported expression!" in assert false


let string_of_bop b =
  match b with
  | Plus -> "+"
  | Minus -> "-"
  | Mul -> "*"
  | Xor -> "^"
  | And -> "&"
  | Or -> "|"
  | LShift -> "<<"

let string_of_uop u = 
  match u with
  | Neg -> "-"
  | Not -> "~"

let rec string_of_expr e = 
  match e with
  | Constant c -> Int64.to_string c
  | BExpr (b, e1, e2) -> "(" ^ (string_of_expr e1) ^ " " ^ (string_of_bop b) ^ " " ^ (string_of_expr e2) ^ ")"
  | UExpr (u, e1) -> "(" ^ (string_of_uop u) ^ " " ^ (string_of_expr e1) ^ ")"
  | Var v -> v


let rec size_of_expr e =
  match e with
  | Constant _ -> 1
  | BExpr (_, e1, e2) -> (size_of_expr e1) + (size_of_expr e2) + 1
  | UExpr (_, e1) -> (size_of_expr e1) + 1
  | Var _ -> 1

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

let limit e height = 
    let rec limit_inner e height varmap rev_varmap =
        match e with
        | Constant _ -> e, varmap, rev_varmap
        | BExpr (b, e1, e2) -> if height = 0 
            then 
                if BatMap.mem e rev_varmap 
                then (* If substitute already exist *)
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
                then (* If substitute already exist *)
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

let bitvec_of_int c = 
    Printf.sprintf "#x%016x" c

let sygus_of_bop b =
  match b with
  | Plus -> "bvadd"
  | Minus -> "bvsub"
  | Mul -> "bvmul"
  | Xor -> "bvxor"
  | And -> "bvand"
  | Or -> "bvor"
  | LShift -> "bvshl"

let sygus_of_uop u = 
  match u with
  | Neg -> "bvneg"
  | Not -> "bvnot"

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
    match e with
    | Constant _ -> e
    | BExpr (b, e1, e2) -> BExpr(b, (substitute e1 varmap), (substitute e2 varmap))
    | UExpr (u, e1) -> UExpr(u, (substitute e1 varmap))
    | Var v -> if BatMap.mem v varmap then BatMap.find v varmap else e

let rec replace orig rep addr = 
    match orig, addr with
    | _, [] -> rep
    | BExpr (b, e1, e2), hd::[] -> if hd = 0 then BExpr(b, rep, e2) else BExpr(b, e1, rep)
    | BExpr (b, e1, e2), hd::tl -> if hd = 0 then BExpr(b, (replace e1 rep tl), e2) else BExpr(b, e1, (replace e2 rep tl))
    | UExpr (u, _), 0::[] -> UExpr(u, rep)
    | UExpr (u, e1), 0::tl -> UExpr(u, (replace e1 rep tl))
    | _, _ -> raise BadCode

let add_rule orig deob ruleset = 
    let rec get_all_subexpr e resSet = 
        match e with
        | Constant _ -> BatSet.add e resSet
        | BExpr (b, e1, e2) -> get_all_subexpr e2 (get_all_subexpr e1 (BatSet.add e resSet))
        | UExpr (u, e1) -> get_all_subexpr e1 (BatSet.add e resSet)
        | Var _ -> BatSet.add e resSet
    in
    let all_subexpr_deob = get_all_subexpr deob BatSet.empty in
    let all_subexpr_orig = get_all_subexpr orig BatSet.empty in
    let duplicated = BatSet.intersect all_subexpr_deob all_subexpr_orig in
    let varmap = BatSet.fold (fun elem map -> BatMap.add elem (Var("term" ^ (string_of_int (size_of_map map)))) map) duplicated BatMap.empty in
    let rec remove_duplicated_subexpr e duplicated varmap = 
        match e with
        | Constant _ -> e
        | BExpr (b, e1, e2) -> if BatSet.mem e duplicated 
            then BatMap.find e varmap 
            else BExpr (b, (remove_duplicated_subexpr e1 duplicated varmap), (remove_duplicated_subexpr e2 duplicated varmap)) 
        | UExpr (u, e1) -> if BatSet.mem e duplicated 
            then BatMap.find e varmap 
            else UExpr (u, (remove_duplicated_subexpr e1 duplicated varmap))
        | Var _ -> e
    in
    let removed_orig = remove_duplicated_subexpr orig duplicated varmap in
    let removed_deob = remove_duplicated_subexpr deob duplicated varmap in
    if equal_expr removed_orig removed_deob then ruleset else BatSet.add (removed_orig, removed_deob) ruleset

let rec apply_rules e ruleset =
    let rec match_rule e rule varmap revmap = 
        match e, rule with
        | Constant c, Constant c' -> 
            let res = if c = c' then true else false in
            res, varmap, revmap
        | BExpr (b, e1, e2), BExpr (b', e1', e2') -> if b = b' 
            then 
                let res, newmap, newrevmap = match_rule e1 e1' varmap revmap in 
                if res then match_rule e2 e2' newmap newrevmap else false, varmap, revmap
            else false, varmap, revmap
        | UExpr (u, e1), UExpr (u', e1') -> if u = u' 
            then match_rule e1 e1' varmap revmap
            else false, varmap, revmap
        | Var v, Var v' -> if BatMap.mem v varmap then 
            if (BatMap.find v varmap) = v' then true, varmap, revmap else false, varmap, revmap
            else true, (BatMap.add v v' varmap), (BatMap.add v' v revmap)
        | _, _ -> false, varmap, revmap
    in
    let rec apply_varmap e varmap =
        match e with
        | Constant _ -> e
        | BExpr (b, e1, e2) -> BExpr (b, (apply_varmap e1 varmap), (apply_varmap e2 varmap))
        | UExpr (u, e1) ->  UExpr (u, (apply_varmap e1 varmap))
        | Var v -> if BatMap.mem v varmap then Var(BatMap.find v varmap) else raise BadCode
    in
    let rec apply_rule e rule =
        match e with
        | Constant _ -> e
        | BExpr (b, e1, e2) -> 
            let res, varmap, revmap = match_rule e (fst rule) BatMap.empty BatMap.empty in
            let _ = BatMap.iter (fun k v -> debug "varmap: %s -> %s\n" k v) varmap in
            let _ = BatMap.iter (fun k v -> debug "revmap: %s -> %s\n" k v) revmap in
            if res then (apply_varmap (snd rule) revmap)
            else BExpr (b, (apply_rule e1 rule), (apply_rule e2 rule))
        | UExpr (u, e1) -> 
            let res, varmap, revmap = match_rule e (fst rule) BatMap.empty BatMap.empty in
            let _ = BatMap.iter (fun k v -> debug "varmap: %s -> %s\n" k v) varmap in
            let _ = BatMap.iter (fun k v -> debug "revmap: %s -> %s\n" k v) revmap in
            if res then (apply_varmap (snd rule) revmap)
            else UExpr (u, (apply_rule e1 rule))
        | Var _ -> e
    in
    let applyed = BatSet.fold (fun r e -> apply_rule e r) ruleset e in
    let rec_checker = BatSet.fold (fun r e -> apply_rule e r) ruleset applyed in
    (* Apply rules until fully optimized *)
    if applyed = rec_checker then applyed else apply_rules rec_checker ruleset
