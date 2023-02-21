# 0x02. C - Functions, nested loops

## 0. _putchar

A `c` program that prints `_putchar`, followed by a new line. The program returns 0.

```
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *s = "_puchar";

	while (*s)
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
	return (0);
}
```

> `*s` is a pointer that points at the first location of the string. We will look at this later.

Actual solution in [0-putchar.c](./0-putchar.c)
