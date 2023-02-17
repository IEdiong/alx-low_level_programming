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
int main(void)
{
	puts("\"Programming is like building a multilingual puzzle");
	return (0);
}

```

> The `\` is used to escape the `"` that comes before the text `Programming`.

> The `puts` function automatically prints out a newline character at the end of the string.

Actual solution in [4-puts.c](./4-puts.c)

## 5. Hello, printf
A C program that uses `printf` to print to stdout the string `with proper grammar, but the outcome is a piece of art,` followed by a new line.

```
int main(void)
{
	printf("with proper grammar, but the outcome is a piece of art,\n");
	return (0);
}

```

> The `printf` function does not print out a new line automatically, you have to ask it to do so by including the newline character `\n`.

Actual solution in [5-printf.c](./5-printf.c)

## 6. Size is not grandeur, and territory does not make a nation
A C program that prints the size of various types on the computer it is compiled and run on.

```
int main(void)
{
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %d byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long long));
	printf("Size of a float: %d byte(s)\n", sizeof(float));
}
```

> The `sizeof` function is runs the size of the data types being passed into it as a parameter.

Actual solution in [6-size.c](./6-size.c)

## 7. Intel 
A bash scripts that generates the assembly code (Intel syntax) of a C code and save it in an output file. The `C` file name will be saved in the variable `$CFILE` and the output file should be named the same as the `C` file.

```
#!/bin/bash
gcc -S -masm=intel $CFILE
```

> The `-masm=dialect` outputs `asm` instructions using selected `dialect`. Supported choices are `intel` or `att` (the default one). Darwin does not support `intel`. 

Actual solution in [100-intel](./100-intel)

## 8. UNIX is basically a simple operating system, but you have to be a genius to understand the simplicity.

A `C` program that prints exactly `and that piece of art is useful" - Dora Korpar, 2015-10-19`, followed by a new line, to the `standard error`. The program is not allowed to use any functions listed in the `NAME` section of the man (3) `printf` or man (3) `puts`. The program should return 1.

```
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora korpar, 2015-10-19\n", 59);
	return (1);
}
```

> The `write()` function writes to a file descriptor. `write()` writes up to `count` bytes from the buffer pointed `buf` to the file referred to by the file descriptor `fd`.

> The `write()` function is defined as `ssize_t write(int fd, const void *buf, size_t count);`

> `fd` stands for `file descriptor`.

> Standard File Descriptors: When any process starts, then that process file descriptors table’s fd(file descriptor) 0, 1, 2 open automatically, (By default) each of these 3 fd references file table entry for a file named /dev/tty.

> Read from stdin => read from fd 0 : Whenever we write any character from keyboard, it read from stdin through fd 0 and save to file named /dev/tty.

> Write to stdout => write to fd 1 : Whenever we see any output to the video screen, it’s from the file named /dev/tty and written to stdout in screen through fd 1.

> Write to stderr => write to fd 2 : We see any error to the video screen, it is also from that file write to stderr in screen through fd 2.

> Content gotten from [linux.die.net](https://linux.die.net/man/2/write#:~:text=The%20file%20descriptor%20fd%20refers,and%20the%20write%20would%20block.) and [geeksforgeeks](https://www.geeksforgeeks.org/input-output-system-calls-c-create-open-close-read-write/)

Actual solution in [101-quote.c](./101-quote.c)
