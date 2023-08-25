type token =
  | EOF
  | TK_DEFINE_FUN
  | TK_LPAREN
  | TK_RPAREN
  | TK_BV
  | TK_BV_LITERAL of (int)
  | TK_SYMBOL of (string)
  | TK_OP of (string)

open Parsing;;
let _ = parse_error;;
# 2 "src/SygusParser.mly"
  open Expr
# 16 "src/SygusParser.ml"
let yytransl_const = [|
    0 (* EOF *);
  257 (* TK_DEFINE_FUN *);
  258 (* TK_LPAREN *);
  259 (* TK_RPAREN *);
  260 (* TK_BV *);
    0|]

let yytransl_block = [|
  261 (* TK_BV_LITERAL *);
  262 (* TK_SYMBOL *);
  263 (* TK_OP *);
    0|]

let yylhs = "\255\255\
\004\000\001\000\001\000\001\000\001\000\007\000\007\000\002\000\
\003\000\006\000\005\000\008\000\008\000\009\000\000\000"

let yylen = "\002\000\
\008\000\005\000\004\000\001\000\001\000\001\000\002\000\001\000\
\001\000\003\000\003\000\002\000\000\000\004\000\002\000"

let yydefred = "\000\000\
\000\000\000\000\000\000\015\000\000\000\008\000\000\000\013\000\
\000\000\000\000\000\000\000\000\000\000\011\000\012\000\000\000\
\000\000\009\000\000\000\005\000\004\000\000\000\010\000\000\000\
\000\000\000\000\000\000\001\000\014\000\003\000\000\000\002\000"

let yydgoto = "\002\000\
\019\000\020\000\021\000\004\000\009\000\012\000\000\000\010\000\
\015\000"

let yysindex = "\012\000\
\012\255\000\000\014\255\000\000\010\255\000\000\015\255\000\000\
\016\255\008\255\017\255\001\255\010\255\000\000\000\000\019\255\
\013\255\000\000\020\255\000\000\000\000\016\255\000\000\001\255\
\019\000\021\255\255\254\000\000\000\000\000\000\022\255\000\000"

let yyrindex = "\000\000\
\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\
\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\
\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\
\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"

let yygindex = "\000\000\
\241\255\251\255\000\000\000\000\000\000\004\000\000\000\000\000\
\000\000"

let yytablesize = 26
let yytable = "\007\000\
\017\000\030\000\017\000\018\000\006\000\018\000\006\000\022\000\
\027\000\013\000\014\000\031\000\001\000\003\000\005\000\006\000\
\008\000\011\000\028\000\024\000\016\000\023\000\025\000\029\000\
\032\000\026\000"

let yycheck = "\005\000\
\002\001\003\001\002\001\005\001\006\001\005\001\006\001\013\000\
\024\000\002\001\003\001\027\000\001\000\002\001\001\001\006\001\
\002\001\002\001\000\000\007\001\004\001\003\001\003\001\003\001\
\003\001\022\000"

let yynames_const = "\
  EOF\000\
  TK_DEFINE_FUN\000\
  TK_LPAREN\000\
  TK_RPAREN\000\
  TK_BV\000\
  "

let yynames_block = "\
  TK_BV_LITERAL\000\
  TK_SYMBOL\000\
  TK_OP\000\
  "

let yyact = [|
  (fun _ -> failwith "parser")
; (fun __caml_parser_env ->
    let _3 = (Parsing.peek_val __caml_parser_env 5 : Expr.expr) in
    let _4 = (Parsing.peek_val __caml_parser_env 4 : 'arglist) in
    let _5 = (Parsing.peek_val __caml_parser_env 3 : 'sortexpr) in
    let _6 = (Parsing.peek_val __caml_parser_env 2 : Expr.expr) in
    Obj.repr(
# 24 "src/SygusParser.mly"
                                                                     ( _6 )
# 102 "src/SygusParser.ml"
               : Expr.expr))
; (fun __caml_parser_env ->
    let _2 = (Parsing.peek_val __caml_parser_env 3 : string) in
    let _3 = (Parsing.peek_val __caml_parser_env 2 : Expr.expr) in
    let _4 = (Parsing.peek_val __caml_parser_env 1 : Expr.expr) in
    Obj.repr(
# 28 "src/SygusParser.mly"
      (
        let bop =
          (match _2 with
            | "bvxor" -> Xor
            | "bvand" -> And
            | "bvor" -> Or
            | "bvadd" -> Plus
            | "bvsub" -> Minus
            | "bvmul" -> Mul
            | "bvshl" -> LShift
            | _ -> (failwith "unsupported")
          )
        in
        BExpr (bop, _3, _4)
      )
# 125 "src/SygusParser.ml"
               : Expr.expr))
; (fun __caml_parser_env ->
    let _2 = (Parsing.peek_val __caml_parser_env 2 : string) in
    let _3 = (Parsing.peek_val __caml_parser_env 1 : Expr.expr) in
    Obj.repr(
# 44 "src/SygusParser.mly"
      (
        let uop =
          (match _2 with
            | "bvnot" -> Not
            | "bvneg" -> Neg
            | _ -> (failwith "unsupported")
          )
        in
        UExpr (uop, _3)
      )
# 142 "src/SygusParser.ml"
               : Expr.expr))
; (fun __caml_parser_env ->
    let _1 = (Parsing.peek_val __caml_parser_env 0 : Expr.expr) in
    Obj.repr(
# 54 "src/SygusParser.mly"
            ( _1 )
# 149 "src/SygusParser.ml"
               : Expr.expr))
; (fun __caml_parser_env ->
    let _1 = (Parsing.peek_val __caml_parser_env 0 : Expr.expr) in
    Obj.repr(
# 55 "src/SygusParser.mly"
           ( _1 )
# 156 "src/SygusParser.ml"
               : Expr.expr))
; (fun __caml_parser_env ->
    let _1 = (Parsing.peek_val __caml_parser_env 0 : Expr.expr) in
    Obj.repr(
# 58 "src/SygusParser.mly"
       ( [_1] )
# 163 "src/SygusParser.ml"
               : 'terms))
; (fun __caml_parser_env ->
    let _1 = (Parsing.peek_val __caml_parser_env 1 : Expr.expr) in
    let _2 = (Parsing.peek_val __caml_parser_env 0 : 'terms) in
    Obj.repr(
# 59 "src/SygusParser.mly"
               ( _1 :: _2 )
# 171 "src/SygusParser.ml"
               : 'terms))
; (fun __caml_parser_env ->
    let _1 = (Parsing.peek_val __caml_parser_env 0 : string) in
    Obj.repr(
# 62 "src/SygusParser.mly"
            ( Var (_1) )
# 178 "src/SygusParser.ml"
               : Expr.expr))
; (fun __caml_parser_env ->
    let _1 = (Parsing.peek_val __caml_parser_env 0 : int) in
    Obj.repr(
# 65 "src/SygusParser.mly"
                ( Constant (_1) )
# 185 "src/SygusParser.ml"
               : Expr.expr))
; (fun __caml_parser_env ->
    Obj.repr(
# 68 "src/SygusParser.mly"
                            (  )
# 191 "src/SygusParser.ml"
               : 'sortexpr))
; (fun __caml_parser_env ->
    let _2 = (Parsing.peek_val __caml_parser_env 1 : 'symbolsortpairstar) in
    Obj.repr(
# 71 "src/SygusParser.mly"
                                         (  )
# 198 "src/SygusParser.ml"
               : 'arglist))
; (fun __caml_parser_env ->
    let _1 = (Parsing.peek_val __caml_parser_env 1 : 'symbolsortpairstar) in
    let _2 = (Parsing.peek_val __caml_parser_env 0 : 'symbolsortpair) in
    Obj.repr(
# 74 "src/SygusParser.mly"
                                    (  )
# 206 "src/SygusParser.ml"
               : 'symbolsortpairstar))
; (fun __caml_parser_env ->
    Obj.repr(
# 75 "src/SygusParser.mly"
    ()
# 212 "src/SygusParser.ml"
               : 'symbolsortpairstar))
; (fun __caml_parser_env ->
    let _2 = (Parsing.peek_val __caml_parser_env 2 : Expr.expr) in
    let _3 = (Parsing.peek_val __caml_parser_env 1 : 'sortexpr) in
    Obj.repr(
# 78 "src/SygusParser.mly"
                                      (  )
# 220 "src/SygusParser.ml"
               : 'symbolsortpair))
(* Entry main *)
; (fun __caml_parser_env -> raise (Parsing.YYexit (Parsing.peek_val __caml_parser_env 0)))
|]
let yytables =
  { Parsing.actions=yyact;
    Parsing.transl_const=yytransl_const;
    Parsing.transl_block=yytransl_block;
    Parsing.lhs=yylhs;
    Parsing.len=yylen;
    Parsing.defred=yydefred;
    Parsing.dgoto=yydgoto;
    Parsing.sindex=yysindex;
    Parsing.rindex=yyrindex;
    Parsing.gindex=yygindex;
    Parsing.tablesize=yytablesize;
    Parsing.table=yytable;
    Parsing.check=yycheck;
    Parsing.error_function=parse_error;
    Parsing.names_const=yynames_const;
    Parsing.names_block=yynames_block }
let main (lexfun : Lexing.lexbuf -> token) (lexbuf : Lexing.lexbuf) =
   (Parsing.yyparse yytables 1 lexfun lexbuf : Expr.expr)
