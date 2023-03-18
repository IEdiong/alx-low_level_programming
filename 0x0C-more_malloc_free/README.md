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

## 1. string_nconcat

A function that concatenates two strings.

```
#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: first part of the string
 * @s2: second part of the string
 * @n: size of second string to concatenate
 *
 * Return: pointer to the concatenated string in memory.
 * Otherwise NULL if malloc fails.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, i, j, size;
	char *str;

	len1 = len2 = 0;
	if (s1 != NULL)
	{
		while (s1[len1] != '\0')
			len1++;
	}
	if (s2 != NULL)
	{
		while (s2[len2] != '\0')
			len2++;
	}

	if (len2 > n)
		len2  = n;

	size = len1 + len2 + 1;
	str = malloc(size * sizeof(char));
	if (str == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		str[i] = s1[i];

	for (j = 0; j < len2; j++)
	{
		str[i] = s2[j];
		i++;
	}

	str[i] = '\0';

	return (str);
}
```

Actual solution in [1-string_nconcat.c](./1-string_nconcat.c)

## 2. _calloc

A function that allocates memory for an array.

```
void *_calloc(unsigned in nmeb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmeb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		ptr[i] = 0;

	return (ptr);
}
```

Actual solution in [2-calloc.c](./2-calloc.c)
