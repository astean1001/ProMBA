export LD_LIBRARY_PATH=/home/opam/.opam/4.08.0/lib/z3
/experiment/duet/_build/src/main.native -z3cli -runid $2 $1 2> $1.result
head -1 $1.result
