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
opam install --yes dune z3 batteries cil yojson lacaml integers

eval $(opam config env)

dune build
mv main.exe promba.exe

# NOTE: if z3 install failed, install z3.4.8.5 instead of latest
# opam install --yes z3.4.8.5