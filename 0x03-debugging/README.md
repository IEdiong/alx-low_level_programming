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
