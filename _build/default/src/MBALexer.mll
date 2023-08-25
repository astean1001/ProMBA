{
	open MBAParser
}

	let id = ['_' 'a'-'z' 'A'-'Z'](['a'-'z' 'A'-'Z' '\'' '0'-'9' '_'])*
	let num = ['0'-'9']+

  rule token = parse
      [' ' '\t' '\n' '\r'] { token lexbuf } 
    | "(" { TK_LPAREN }
    | ")" { TK_RPAREN }
		| "+" as lxm { TK_OP (String.make 1 lxm) }
		| "-" as lxm { TK_OP (String.make 1 lxm) }
		| "*" as lxm { TK_OP (String.make 1 lxm) }
		| "^" as lxm { TK_OP (String.make 1 lxm) }
		| "|" as lxm { TK_OP (String.make 1 lxm) }
		| "&" as lxm { TK_OP (String.make 1 lxm) }
		| "<<" as lxm { TK_OP lxm }
		| "~" as lxm { TK_OP (String.make 1 lxm) }
    | id as lxm { TK_SYMBOL lxm }
    | num as lxm { TK_INT_LITERAL (int_of_string lxm) }
    | eof { EOF }