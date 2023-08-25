{
	open SimplifyParser
}

	let id = ['_' 'a'-'z' 'A'-'Z'](['a'-'z' 'A'-'Z' '\'' '0'-'9' '_'])*
	let num = ('-')?['0'-'9']+
	let bv = ("#x")['0'-'9''a'-'f']+

  rule token = parse
      [' ' '\t' '\n' '\r'] { token lexbuf } 
		| "define-fun" { TK_DEFINE_FUN }
		| "BitVec 64" { TK_BV }
    | "(" { TK_LPAREN }
    | ")" { TK_RPAREN }
		| bv as lxm { TK_BV_LITERAL (Int64.to_int (Int64.of_string ("0x" ^ (String.sub lxm 2 16)))) }
		| "bvnot" as lxm { TK_OP lxm }
		| "bvxor" as lxm { TK_OP lxm }
		| "bvand" as lxm { TK_OP lxm }
		| "bvor" as lxm { TK_OP lxm }
		| "bvneg" as lxm { TK_OP lxm }
		| "bvadd" as lxm { TK_OP lxm }
		| "bvsub" as lxm { TK_OP lxm }
		| "bvmul" as lxm { TK_OP lxm }
		| "bvshl" as lxm { TK_OP lxm }
    | id as lxm { TK_SYMBOL lxm }
    | eof { EOF }
