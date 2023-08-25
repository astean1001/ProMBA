/home/jhlee/duet/_build/src/main.native -z3cli -runid $2 $1 2> $1.result 
head -1 $1.result
