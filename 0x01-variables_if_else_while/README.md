# 0x01. C - Variables, if, else, while

## 0. Positive anything is better than negative nothing.
A `C` program that outputs the number `n` followed by `is positive` if the number is greater than 0, `is zero` if the number is 0 or `is negative` if the number is less than 0; followed by a new line.

```
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	} else if (n == 0)
	{
		printf("%d is zero\n", n);
	} else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
```

> Basic `if...else if...else` statement. 

Actual solution in [0-positive_or_negative.c](./0-positive_or_negative.c)
