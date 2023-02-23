# 0x04. C - More functions, more nested loops

## 0. isupper

A function that checks for uppercase character. It returns `1` if the character is uppercase and `0` otherwise.

```
#include "main.h"

/**
 * _isupper - checks for uppercase character.
 * @c: character to be checked
 *
 * Return: 1 if character is uppercase. 0 otherwise.
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

## 1. isdigit 

A function that checks for a digit (0 through 9). It returns `1` if the character is a digit and `0` otherwise.

```
#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9).
 * @c: character to be checked
 *
 * Return: 1 if character is a digit. 0 otherwise.
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}
```

Actual solution in [1-isdigit.c](./1-isdigit.c)
