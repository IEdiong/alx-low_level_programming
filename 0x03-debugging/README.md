# 0x03. C - Debugging

## 0. Multiple mains

A `c` program that test that the function `positive_or_negative()` gives the correct output when given a case of `0`.

```
#include "main.h"

/**
 * main - tests function that prints if integer is positive or negative
 * Return: 0
 */

int main(void)
{
	int i;

	i = 0;
	positive_or_negative(i);

	return (0);
}
```

Actual solution in [0-main.c](./0-main.c)

## 1. Like, comment, subscribe

The commented part in the program causes an infinite loop.

```
#include <stdio.h>

/**
 * main - causes an infinite loop
 * Return: 0
 */

int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");

	i = 0;
	/**
	* while (i < 10)
	* {
	*	putchar(i);
	* }
	*/
	printf("Infinite loop avoided! \\o/\n");

	return (0);
}
```

Actual solution in [1-main.c](./1-main.c)

2. 0 > 972?

A `c` program that prints the largest of three integers.

```
#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a >= b && a >= c)
	{
		largest = a;
	}
	else if (b >= a && b >= c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

	return (largest);
}
```

Actual solution in [2-largest_number.c](./2-largest_number.c)
