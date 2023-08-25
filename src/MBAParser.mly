%{
  open Expr
%}

%token EOF
%token TK_LPAREN TK_RPAREN 
%token TK_INT

%token<int> TK_INT_LITERAL
%token<string> TK_SYMBOL
%token<string> TK_OP 

%type <Expr.expr> term
%type <Expr.expr> symbol
%type <Expr.expr> literal

%start main
%type <Expr.expr> main
%%

main: term { $1 }
;
term:
  | TK_LPAREN TK_OP term TK_RPAREN 
    {
      let rterm = $3 in
      let op = 
        (match $2 with
          | "-" -> Neg
          | "~" -> Not
          | _ -> (failwith "unsupported")
        )
      in
      UExpr (op, rterm)
    }  
  | TK_LPAREN term TK_OP term TK_RPAREN
    {
      let lterm = $2 in
      let rterm = $4 in
      let op = 
        (match $3 with
          | "+" -> Plus
          | "-" -> Minus
          | "*" -> Mul
          | "^" -> Xor
          | "&" -> And
          | "|" -> Or
          | "/" -> Div
          | "%" -> Mod
          | "<<" -> LShift
          | ">>" -> RShift
          | _ -> (failwith "unsupported")
        )
      in
      BExpr (op, lterm, rterm)
    }
  | literal { $1 }
  | symbol { $1 }
;

symbol: 
  TK_SYMBOL { Var ($1) }
;
literal: 
    TK_INT_LITERAL { Constant ($1) }
;