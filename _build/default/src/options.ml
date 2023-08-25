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
let encodeData = ref false
let synth = ref "duet"
let timeout = ref 600.0
let timeout_sygus = ref 5.0
let outdir = ref "repair-out"
let sygus = ref "eusolver"

let options = 
	[
		("-debug", Arg.Set debug, "Print verbose log for debug");
		("-synth", (Arg.String (fun s -> synth := s)), "Set synthesizer for deobfuscation");
		("-timeout", (Arg.Float (fun s -> timeout := s)), "Set timeout limit for single deobfuscation problem");
		("-timeout_sygus", (Arg.Float (fun s -> timeout_sygus := s)), "Set timeout limit for program synthesis problem");
		("-sygus", (Arg.String (fun s -> sygus := s)), "Set sygus solver for synthesizing deobfuscation expr");
		("-outdir", (Arg.String (fun s -> outdir := s)), "Output directory");
	]
