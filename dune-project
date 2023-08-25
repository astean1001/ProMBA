(lang dune 2.0)

(name DSynth)

(source
 (github pslhy/DSynth))

(authors "@astean1001")

(maintainers "@astean1001")

(license GPL-3.0-or-later)

(documentation https://psl.hanyang.ac.kr)

(generate_opam_files true)

(package
 (name DSynth)
 (synopsis "Binary Code Deobfuscation with DUET")
 (description "Improved program synthesis based approach on binary code deobfuscation with inductive program synthesizer that combines top-down deduction and bottom-up enumeration")
 (depends
  (ocaml (<= 4.6.0))
  (dune (>= 2.9.0))
  z3 batteries cil yojson lacaml integers
 )
 (tags
  (deobfuscation, Program Synthesis)
 )
)

; See the complete stanza docs at https://dune.readthedocs.io/en/stable/dune-files.html#dune-project
