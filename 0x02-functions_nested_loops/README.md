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

## 1. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game. 

A `c` program that prints the alphabet in lowercase, followed by a newline. The program uses the `_putchar` function only twice. 

```
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
	return (0);
}
```

Actual solution in [1-alphabet.c](./1-alphabet.c)
