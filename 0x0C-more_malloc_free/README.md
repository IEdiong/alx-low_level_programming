# 0x0C. C - More malloc, free

## 0. Trust no one

A function that allocates memory using malloc.

```
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: size of memory to be allcated in the heap
 *
 * Return: pointer to the allocated memory.
 * Otherwise 98 if malloc fails.
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);

	return (p);
}
```

Actual solution in [0-malloc_checked.c](./0-malloc_checked.c)
