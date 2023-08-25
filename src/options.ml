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

let debug = ref false
let pbe = ref false
let learn = ref false
let encodeData = ref false
let onlyRule = ref false
let noRule = ref false
let blast = ref false
let mbaOnly = ref false
let single = ref ""
let synth = ref "abs_synth"
let synth2 = ref ""
let timeout = ref 1800.0
let timeout_sygus = ref 5.0
let outdir = ref "repair-out"
let sygus = ref "eusolver"
let lsolver = ref ""
let height = ref 4
let size = ref 8
let timeout_smt = ref 10.0
let smt = ref "z3"
let rulefile = ref "learned.rule"
let runid = ref "0"
let result = ref "result.txt"
let max_height = ref 5
let max_timeout = ref 20.0
let no_temp = ref true
let max_var = ref 3 
let floki = ref ""
let mbasolve = ref false
let genexpr = ref false
let runid_tosynth = ref false
let evaluate_expr = ref false

let options = 
	[
		("-debug", Arg.Set debug, "Print verbose log for debug");
		("-onlyrule", Arg.Set onlyRule, "Apply rules only (turn off synthesis)");
		("-synthid", Arg.Set runid_tosynth, "Provide id information as extra input to synthesizer");
		("-mba", Arg.Set mbaOnly, "take mba expression as input");
		("-norule", Arg.Set noRule, "Do not write rulefile");
		("-evalnum", Arg.Set evaluate_expr, "Evaluate calculatable constants");
		("-mbablast", Arg.Set blast, "Solve problems by reimplementation of MBABlast");
		("-mbasolver", Arg.Set mbasolve, "Solve problems by reimplementation of MBASolver");
		("-floki", (Arg.String (fun s -> floki := s)), "Run FLoki MBA obfuscator for given file");
		("-genexpr", (Arg.Set genexpr), "Generate 250 random expr in generate_expr.txt");
		("-pbe", Arg.Set pbe, "Solving problem with programming by example");
		("-learn", Arg.Set learn, "Conduct an offline learning to learning simplification rules");
		("-rulefile", (Arg.String (fun s -> rulefile := s)), "Set file name to save/load learned rules");
		("-result", (Arg.String (fun s -> result := s)), "Set file name to save deobfuscation result");
		("-runid", (Arg.String (fun s -> runid := s)), "Set id for preventing file duplication in parallel execution");
		("-height", (Arg.Int (fun s -> height := s)), "Set the height of the sub-expression to be deobfuscated");
		("-size", (Arg.Int (fun s -> size := s)), "Set the size of the sub-expression to be deobfuscated");
		("-maxvar", (Arg.Int (fun s -> max_var := s)), "Set the maximum number of variables allowed for a sub-expression");
		("-synth", (Arg.String (fun s -> synth := s)), "Set synthesizer for deobfuscation (might be aggressive)");
		("-synth2", (Arg.String (fun s -> synth2 := s)), "Set a synthesizer for smallest solution and LIA support (recommended for minimizing solution size, may take longer to run.)");
		("-lsolver", (Arg.String (fun s -> lsolver := s)), "Set a linear MBA Solver");
		("-single", (Arg.String (fun s -> single := s)), "Set problem name if you want to solve a single specific problem, not whole things in target file (Off when empty string)");
		("-timeout", (Arg.Float (fun s -> timeout := s)), "Set timeout limit for single deobfuscation problem");
		("-timeout_sygus", (Arg.Float (fun s -> timeout_sygus := s)), "Set timeout limit for program synthesis problem");
		("-timeout_smt", (Arg.Float (fun s -> timeout_smt := s)), "Set timeout limit for SAT solver validation of rule");
		("-smt", (Arg.String (fun s -> smt := s)), "Set command to invoke the SMT solver"	);
		("-sygus", (Arg.String (fun s -> sygus := s)), "Set sygus solver for synthesizing deobfuscation expr");
		("-outdir", (Arg.String (fun s -> outdir := s)), "Output directory");
	]
