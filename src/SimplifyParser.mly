%{
  open Expr
%}

%token EOF
%token TK_DEFINE_FUN 
%token TK_LPAREN TK_RPAREN 
%token TK_BV

%token<int64> TK_BV_LITERAL
%token<string> TK_SYMBOL
%token<string> TK_OP 

%type <Expr.expr> term
%type <Expr.expr> symbol
%type <Expr.expr> literal

%start main
%type <Expr.expr> main
%%


main: 
  term { $1 }
;
term: 
  | TK_LPAREN TK_OP terms TK_RPAREN 
      {
        let rec list_to_expr op tl = 
            match tl with
            | h::[t] -> BExpr(op,h,t)
            | h::t -> BExpr(op,h,(list_to_expr op t))
            | [] -> (failwith "unsupported")
        in
        match $2 with
        | "bvxor" -> list_to_expr Xor $3
        | "bvand" -> list_to_expr And $3
        | "bvor" -> list_to_expr Or $3
        | "bvadd" -> list_to_expr Plus $3
        | "bvsub" -> list_to_expr Minus $3
        | "bvmul" -> list_to_expr Mul $3
        | "bvshl" -> list_to_expr LShift $3
        | "bvnot" -> UExpr(Not, List.nth $3 0)
        | "bvneg" -> UExpr(Neg, List.nth $3 0)
        | _ -> (failwith "unsupported")
      } 
  | literal { $1 }
  | symbol { $1 }
;

terms:
  term { [$1] }
  | term terms { $1 :: $2 } 
;


symbol: 
  TK_SYMBOL { Var ($1) }
;
literal: 
  TK_BV_LITERAL { Constant (BV64.int64 $1) }
;