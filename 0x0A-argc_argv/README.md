# 0x0A. C - argc, argv

## 0. It ain't what they call you, it's what you answer to

A `c` program that prints its name, followed by a new line. If the program is renamed without having to compile it again, it will print the new name.

```
#include <stdio.h>
#include "main.h"

/**
 * main - prints the program name followed by a new line
 * @argc: arguments count
 * @argv: arguments vector
 *
 * Return: Always 0 (Success)
 */

int main(int __attribute((__unused__)) argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
```

> `__attribute((__unused__))` suppresses all warnings with regards to unused variables or parameters.

Actual solution in [0-whatsmyname.c](./0-whatsmyname.c)
