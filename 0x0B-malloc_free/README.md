# 0x0B. C - Malloc, Free

## 0. Float like a butterfly, sting like a bee

A function that creates an array of chars, and initializes it with a specific char.

```
#include <stdlib.h>

/**
 * create_array - Creates an array of chars
 * @size: size of the array
 * @c: char to initialize the array with
 *
 * Return: pointer to the beginning of the array. Otherwise NULL, if
 * size is 0 or if it fails.
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
		return (NULL);

	s = malloc(size * sizeof(char));
	if (s == NULL)
		return (NULL);

	i = 0;
	while (i < size)
	{
		*(s + i) = c;
		i++;
	}


	return (s);
}
```

> NB: we don't need to create extra memory for the null byte contained in strings as this is not required for this task.

Actual solution in [0-create_array.c](./0-create_array.c)

## 1. The woman who has no imagination has no wings

A function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter. 

```
#include <stdlib.h>

/**
 * _strdup - Creates an array of chars
 * @str: string to copy
 *
 * Return: pointer to the beginning of the duplicated string. Otherwise NULL, if
 * str is NULL or if insufficient memory was available.
 */

char *_strdup(char *str)
{
	char *s;
	unsigned int i;
	unsigned int size;

	if (str == NULL)
		return (NULL);

	size = i = 0;
	while (str[i] != '\0')
	{
		size++;
		i++;
	}

	size++;
	s = malloc(size * sizeof(char));
	if (s == NULL)
		return (NULL);

	i = 0;
	while (i < size)
	{
		*(s + i) = *(str + i);
		i++;
	}


	return (s);
}
```


Actual solution in [1-strdup.c](./1-strdup.c)
