mkdir backup 
cp *.c backup/
gcc -E -fno-optimize-sibling-calls -fno-strict-aliasing -fno-asm -O0 -std=c99 $1 -lm -s > $1.i 
cilly --gcc=/usr/bin/gcc-6 --out=tmp.c $1.i
mv tmp.c $1.orig.c 
cp $1.orig.c $1
