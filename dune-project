(lang dune 2.0)

(name ProMBA)

(source
 (github astean1001/ProMBA))

(authors "Jane Doe <jane.doe@example.com>")

(maintainers "@astean1001")

(license GPL-3.0-or-later)

(documentation https://psl.hanyang.ac.kr)

(generate_opam_files true)

(package
 (name ProMBA)
 (synopsis "MBA deobfuscator via Program Synthesis and Term Rewriting")
 (description "ProMBA is a deobfuscator for the MBA obfuscator. It uses Program Synthesis and Term Rewriting to deobfuscate the obfuscated code.")
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
