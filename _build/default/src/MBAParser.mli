type token =
  | EOF
  | TK_LPAREN
  | TK_RPAREN
  | TK_INT
  | TK_INT_LITERAL of (int)
  | TK_SYMBOL of (string)
  | TK_OP of (string)

val main :
  (Lexing.lexbuf  -> token) -> Lexing.lexbuf -> Expr.expr
