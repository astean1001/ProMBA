type token =
  | EOF
  | TK_DEFINE_FUN
  | TK_LPAREN
  | TK_RPAREN
  | TK_BV
  | TK_BV_LITERAL of (int)
  | TK_SYMBOL of (string)
  | TK_OP of (string)

val main :
  (Lexing.lexbuf  -> token) -> Lexing.lexbuf -> Expr.expr
