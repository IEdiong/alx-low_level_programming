# 0x00. C - Hello, World

## 0. Preprocessor
A bash script that runs a C file through the preprocessor and saves the result into another file.

```
gcc -E $CFILE -o c
     |   |     | |
     |   |     | └─⫸ <output_file_name>
     |   |     └─⫸ tells the compiler to rename the output file
     |   └─⫸ shell variable, it holds a value
     └─⫸ tells the compiler to run only the preprocessor

// the -E flag runs the preprocessor only
// the $CFILE is a Linux variable containing the name of the C file to be preprocessed
// the -o flag followed by the file name 'c', defines the name of the output file
```

Actual solution in [0-preprocessor](./0-preprocessor)

## 1. Compiler
A bash script that compiles C file but does not link it and outputs it into a file named the same as the C file, but with the extension `.o` instead of `.c`. Example: if the file is `main.c`, the output file should be `main.o`. 

```
gcc -c $CFILE
     |   |
     |   └─⫸ shell variable, it holds a value
     └─⫸ tells the compiler not to link
```

Actual solution in [1-compiler](./1-compiler)

## 2. Assembler
