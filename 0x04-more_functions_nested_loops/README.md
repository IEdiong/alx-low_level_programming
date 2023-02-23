# 0x04. C - More functions, more nested loops

## 0. isupper

A function that checks for uppercase character. It returns `1` if the character is uppercase and `0` otherwise.

```
#include "main.h"

/**
 * _isupper - Checks for uppercase character.
 *
 * Return: 1 if character is uppercase. Otherwise 0.
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	else
		return (0);
}
```

Actual solution in [0-isupper.c](./0-isupper.c)
