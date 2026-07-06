#!/bin/bash

if [ ! -d "$HOME/.opam" ]
then
    opam init --auto-setup --disable-sandboxing --yes && opam clean
fi

if [ ! -d "$HOME/.opam/promba" ]
then
    opam switch create promba 4.05.0
fi

opam switch promba 
eval $(opam config env)

opam repository add archive git+https://github.com/ocaml/opam-repository-archive --yes 2>/dev/null || \
    opam repository add archive https://github.com/ocaml/opam-repository-archive.git --yes
opam update --yes

opam install --yes dune z3 batteries cil yojson lacaml integers bitvec
eval $(opam config env)

dune build
mv main.exe promba.exe

# NOTE: if z3 install failed, install z3.4.8.5 instead of latest
# opam install --yes z3.4.8.5
