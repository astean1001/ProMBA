d=`pwd`
cd /home/jhlee/eusolver
/home/jhlee/eusolver/eusolver $d/$1 2> $d/$1.result 
cd $d
head -1 $1.result
