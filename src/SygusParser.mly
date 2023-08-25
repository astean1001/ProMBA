%{
  open Expr
%}

%token EOF
%token TK_DEFINE_FUN 
%token TK_LPAREN TK_RPAREN 
%token TK_BV

%token<int> TK_BV_LITERAL
%token<string> TK_SYMBOL
%token<string> TK_OP 

%type <Expr.expr> term
%type <Expr.expr> symbol
%type <Expr.expr> literal

%start main
%type <Expr.expr> main
%%


main: 
  TK_LPAREN TK_DEFINE_FUN symbol arglist sortexpr term TK_RPAREN EOF { $6 }
;
term: 
  | TK_LPAREN TK_OP term term TK_RPAREN 
      {
        let bop =
          (match $2 with
            | "bvxor" -> Xor
            | "bvand" -> And
            | "bvor" -> Or
            | "bvadd" -> Plus
            | "bvsub" -> Minus
            | "bvmul" -> Mul
            | "bvshl" -> LShift
            | "bvsrem" -> Mod
            | "bvsdiv" -> Div
            | "bvlshr" -> RShift
            | _ -> (failwith "unsupported")
          )
        in
        BExpr (bop, $3, $4)
      } 
  | TK_LPAREN TK_OP term TK_RPAREN 
      {
        let uop =
          (match $2 with
            | "bvnot" -> Not
            | "bvneg" -> Neg
            | _ -> (failwith "unsupported")
          )
        in
        UExpr (uop, $3)
      } 
  | literal { $1 }
  | symbol { $1 }
;
terms:
  term { [$1] }
  | term terms { $1 :: $2 } 

symbol: 
  TK_SYMBOL { Var ($1) }
;
literal: 
  TK_BV_LITERAL { Constant ($1) }
;
sortexpr: 
  TK_LPAREN TK_BV TK_RPAREN {  } 
;
arglist: 
  TK_LPAREN symbolsortpairstar TK_RPAREN {  }
;
symbolsortpairstar: 
  symbolsortpairstar symbolsortpair {  }
  | {}
;
symbolsortpair: 
  TK_LPAREN symbol sortexpr TK_RPAREN {  }
;