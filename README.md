# ProMBA

ProMBA is a mixed boolean arithmetic expression deobfuscator via program synthesis and term rewriting.


## Dependencies
- opam(https://opam.ocaml.org/): for ocaml compiler
```
$ sudo apt-get install -y opam
$ opam init --auto-setup --disable-sandboxing --yes
```
- libgmp-dev(https://gmplib.org/): for z3 solver
```
$ sudo apt-get install -y libgmp-dev
```
- python3 : for linear deobfuscator ([SiMBA](https://github.com/DenuvoSoftwareSolutions/SiMBA)) and [MBASolver](https://github.com/softsec-unh/MBA-Solver)
```
$ sudo apt-get install -y python3
```
- libopenblas-dev (https://www.openblas.net/) : for numpy
```
$ sudo apt-get install -y libopenblas-dev
```
- fortran : for numpy
```
$ sudo apt-get install -y gfortran
```
- Program Synthesizer : at least one of the following tools is required
    - duet (https://github.com/astean1001/duet)
    ```
    $ git clone https://github.com/astean1001/duet.git
    $ cd duet
    $ ./build
    $ make
    ```
    - simba (https://github.com/astean1001/simba_synth)
    ```
    $ git clone https://github.com/astean1001/simba_synth.git
    $ cd simba_synth
    $ ./first_build.sh
    ```
    - eusolver (https://bitbucket.org/abhishekudupa/eusolver)
    ```
    $ git clone https://bitbucket.org/abhishekudupa/eusolver.git
    $ cd eusolver
    $ ./scripts/build.sh
    ```

## Build
### Quick Start
- Use pre-built docker image
```
$ docker pull astean1001/promba:v1
```

### Manual Build
0. TL;DR, do it in one-line commannd
```
$ ./build.sh
```
1. Make proper ocaml environment and get dependency packages
```
opam switch create promba 4.05.0
opam switch promba 
opam install --yes dune z3 batteries cil yojson lacaml integers
```

### Required OPAM Packages
- dune : Build system
- z3 : SMT solver
- batteries : Extended standard libraries
- cil : Read C functions
- yojson : Read JSON format
- lacaml : Linear algebra calculation (for MBABlast)
- integers : Extended Integer Datatype (for MBABlast)

2. Build by dune
```
dune build
```
The compiled executable file can be found at `main.exe`. (or `promba.exe`) Since the executable is self-contained, it can be easily moved or copied to any location for your convenience and executed.

3. Setup synthesizer script

Write a script that outputs only the target synthesis function in SyGuS format, similar to `simbas.sh` or `duet.sh` in this repo.

4. Run deobfuscator
Just run the executable with target C file with obfuscated mba functions.
The C file containing MBA functions must meet the following conditions:
- Functions containing each MBA obfuscated expression must have names starting with 'target_'.
- The C file must be a file transformed by CIL.

```
$ ./promba.exe <options> [a C input file]
```
You may find the options available by:

```
$ ./promba.exe -help
```
For example, to solve the problem `target_499` described in `loki_benchmark/loki.c`,
```
$ ./promba.exe -timeout 4000.0 -rulefile ./no.rules -norule -height 3 -timeout_sygus 3.0 -sygus ./simbas.sh -synth2 ./synth.sh -lsolver ./simbad -single target_499 ./loki_benchmark/loki.c
```
You will get the following output:
```
[2023-09-12 12:36:01] Parsing File: ./loki_benchmark/loki.c
[2023-09-12 12:36:05] Solving Problem:  target_499 
...
[2023-09-12 12:37:17] Deobfuscation Result: (x + (-1 * y))
[2023-09-12 12:37:17] timeout : 3.000000
[2023-09-12 12:37:17] Answer Found (Checker Solved) :: (x - y) 
[2023-09-12 12:37:17] Answer Found (Solver Solved) :: (x + ((- 1) * y)) 
```
And you can see the following output in result.txt:
```
Name: target_499, Result: (x - y), Size: 3, OrigSize: 1120, VarNum: 2, IsPoly: false, AlterOrig: 128, AlterDeob: 0, RuleNumber: 31, RuleCount: 200, LinearReduce: 732, SynthReduce: 248, RuleReduce: 140, Time: 72.000000
```
Each entry in `result.txt` has the following meanings:

- Name: The name of the problem
- Result: The expression of the deobfuscation result
- Size: The number of AST nodes in the deobfuscated expression
- OrigSize: The number of AST nodes in the original expression
- VarNum: The number of variables used in the original expression
- IsPoly: Whether it is a Polynomial MBA
- AlterOrig: MBA Alternation in the original expression
- AlterDeob: MBA Alternation in the deobfuscated expression
- RuleNumber: The number of learned rules
- RuleCount: The number of times rules were applied
- LinearReduce: The reduction in size by the Linear deobfuscator
- SynthReduce: The reduction in size by the Program synthesizer
- RuleReduce: The reduction in size by the Term rewriter
- Time: Total execution time

## How to evaluate dataset

You can evaluate the benchmark through `./run_test.`

```
$ ./run_test qsynth # run qsynth benchmark
$ ./run_test loki # run loki benchmark
$ ./run_test floki # run full-loki benchmark
$ ./run_test mbasolve-poly # run mbasolve benchmark (poly)
$ ./run_test mbasolve-nonpoly # run mbasolve benchmark (nonpoly)
```

## References
[1] Jaehyung, L., Woosuk L. (2023, November). Simplifying Mixed Boolean-Arithmetic Obfuscation by Program Synthesis and Term Rewriting. In Proceedings of the 30th ACM Conference on Computer and Communications Security (CCS) 2023