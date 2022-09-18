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
A bash script that compiles C file to the assembly code and outputs it into a file named the same as the C file, but with the extension `.s` instead of `.c`. Example: if the file is `main.c`, the output file should be `main.s`. 

```
gcc -S $CFILE
     |   |
     |   └─⫸ shell variable, it holds a value
     └─⫸ tells the compiler to generate assembly code
```

Actual solution in [2-assembler](./2-assembler)

## 3. Name
A bash script that compiles C file to an executable and names the outputed file `cisfun`. 

```
gcc $CFILE -o cisfun
     |      |    |
     |      |    └─⫸ <output_file_name>
     |      └─⫸ tells the compiler to rename the output file
     └─⫸ shell variable, it holds a value
```

Actual solution in [3-name](./3-name)

## 4. Hello, puts
A C program that uses `puts` to print to stdout the string `"Programming is like building a multilingual puzzle` followed by a new line.

```
puts("\"Programming is like building a multilingual puzzle")

// Note that the puts function automatically prints out a newline character at the end of the string.
```

Actual solution in [4-puts.c](./4-puts.c)

## 5. Hello, printf
A C program that uses `printf` to print to stdout the string `with proper grammar, but the outcome is a piece of art,` followed by a new line.

```
printf("with proper grammar, but the outcome is a piece of art,\n")

// Note that the printf function does not print out a new line automatically, you have to ask it to do so.
```

Actual solution in [5-printf.c](./5-printf.c)
