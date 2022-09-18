# C - Low-level Programming

## GCC
When you invoke `GCC`, it normally does `preprocessing`, `compilation`, `assembly` and `linking`. The “overall options” allow you to stop this process at an intermediate stage. For example, the `-c` option says not to run the linker. Then the output consists of object files output by the assembler. We would look at some of these other options in `0x00-Hello-World`.

The `gcc` program accepts options and file names as operands, e.g.

```
gcc -E main.c
     |    |
     |    └─⫸  <file_name>
     |
     └─⫸  <flag>
```

## Options (flags)
The options (flags) typically begin with a `-` or `--` followed by a letter or word. Because of the large amount of options that can be past into `gcc`, they have therefore been grouped by type. Example of this grouping include `Overall Options`, `C Language Options`, `Language Independent Options`, `Warning Options`, `Directory Options`, `Target Options`, `Linker Options`, etc. For the purpose of this program we would be focusing on one of the `C Language Options` and some of the `Warning Options`.

### C Language Options - Options Controlling C Dialect
The following options control the dialect of C (or languages derived from C, such as C++, Objective-C and Objective-C++) that the compiler accepts:

- `-std=`:
: Determine the language standard. This option is currently only supported when compiling C or C++. A value for this option must be provided; possible values are

- `c89`
- `iso9899:1990`
: ISO C90 (same as -ansi).
- `gnu89`
: Default, ISO C90 plus GNU extensions (including some C99 features).
- `gnu99`
- `gnu9x`
: ISO C99 plus GNU extensions. When ISO C99 is fully implemented in GCC, this will become the default. The name `gnu9x' is deprecated.

Even when this option is not specified, you can still use some of the features of newer standards in so far as they do not conflict with previous C standards. For example, you may use `__restrict__` even when `-std=c99` is not specified.

The `-std` options specifying some version of **ISO C** have the same effects as `-ansi`, except that features that were not in **ISO C90** but are in the specified version (for example, `//` comments and the inline keyword in ISO C99) are not disabled.

See [Language Standards Supported by GCC](https://gcc.gnu.org/onlinedocs/gcc-4.1.2/gcc/Standards.html#Standards), for details of these standard versions.

### Warning Options - Options to Request or Suppress Warnings
Warnings are diagnostic messages that report constructions which are not inherently erroneous but which are risky or suggest there may have been an error. You can request many specific warnings with options beginning with `-W`, for example `-Wimplicit` to **request warnings on implicit declarations**. Each of these specific warning options also has a negative form beginning `-Wno-` to turn off warnings; for example, `-Wno-implicit`.

The following are some of the options that we would be turning on while compiling our C program:

- `-pedantic`: 

