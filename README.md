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

---

The following options control the dialect of C (or languages derived from C, such as C++, Objective-C and Objective-C++) that the compiler accepts:

- `-std=`
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
---
Warnings are diagnostic messages that report constructions which are not inherently erroneous but which are risky or suggest there may have been an error. You can request many specific warnings with options beginning with `-W`, for example `-Wimplicit` to **request warnings on implicit declarations**. Each of these specific warning options also has a negative form beginning `-Wno-` to turn off warnings; for example, `-Wno-implicit`.

The following are some of the options that we would be turning on while compiling our C program:

1. `-pedantic`
: Issue all the warnings demanded by strict **ISO C** and **ISO C++**; reject all programs that use forbidden extensions, and some other programs that do not follow ISO C and ISO C++. For ISO C, follows the version of the ISO C standard specified by any `-std` option used.

- Valid ISO C and ISO C++ programs should compile properly with or without this option (though a rare few will require `-ansi` or a `-std` option specifying the required version of ISO C). However, without this option, certain GNU extensions and traditional C and C++ features are supported as well. With this option, they are rejected.

- **-pedantic** does not cause warning messages for use of the alternate keywords whose names begin and end with `__`. Pedantic warnings are also disabled in the expression that follows `__extension__`. However, only system header files should use these escape routes; application programs should avoid them. See [Alternate Keywords](https://gcc.gnu.org/onlinedocs/gcc-4.1.2/gcc/Alternate-Keywords.html#Alternate-Keywords).

- Some users try to use **-pedantic** to check programs for strict ISO C conformance. They soon find that it does not do quite what they want: it finds some non-ISO practices, but not all—only those for which ISO C requires a diagnostic, and some others for which diagnostics have been added.

- A feature to report any failure to conform to ISO C might be useful in some instances, but would require considerable additional work and would be quite different from **-pedantic**. We don't have plans to support such a feature in the near future.

- Where the standard specified with **-std** represents a GNU extended dialect of C, such as `gnu89` or `gnu99`, there is a corresponding base standard, the version of ISO C on which the GNU extended dialect is based. Warnings from **-pedantic** are given where they are required by the base standard. (It would not make sense for such warnings to be given only for features not in the specified GNU C dialect, since by definition the GNU dialects of C include all features the compiler supports with the given option, and there would be nothing to warn about.)

2. `-Werror`
: Make all warnings into errors.

3. `-Wextra`
: (This option used to be called **-W**. The older name is still supported, but the newer name is more descriptive.) Print extra warning messages for these events:
- A function can return either with or without a value. (Falling off the end of the function body is considered returning without a value.) For example, this function would evoke such a warning:
```
foo (a)
{
	if (a > 0)
		return a;
}
```
- An expression-statement or the left-hand side of a comma expression contains no side effects. To suppress the warning, cast the unused expression to void. For example, an expression such as `x[i,j]` will cause a warning, but `x[(void)i,j]` will not.
- An unsigned value is compared against zero with `<` or `>=`.
- Storage-class specifiers like static are not the first things in a declaration. According to the C Standard, this usage is obsolescent.
- If **-Wall** or **-Wunused** is also specified, warn about unused arguments.
- A comparison between signed and unsigned values could produce an incorrect result when the signed value is converted to unsigned. (But don't warn if **-Wno-sign-compare** is also specified.)
- An aggregate has an initializer which does not initialize all members. This warning can be independently controlled by `-Wmissing-field-initializers`.
- A function parameter is declared without a type specifier in K&R-style functions:
```
void foo(bar) { }
```          
- An empty body occurs in an `if' or `else' statement.
- A pointer is compared against integer zero with `<`, `<=`, `>`, or `>=`.
- A variable might be changed by `longjmp` or `vfork`.
- Any of several floating-point events that often indicate errors, such as overflow, underflow, loss of precision, etc.

4. `-Wall`
: All of the above `-W` options combined. This enables all the warnings about constructions that some users consider questionable, and that are easy to avoid (or modify to prevent the warning), even in conjunction with macros.

## Source
For the full documentation visit: [gcc online docs](https://gcc.gnu.org/onlinedocs/gcc-4.1.2/gcc/Invoking-GCC.html#Invoking-GCC)
