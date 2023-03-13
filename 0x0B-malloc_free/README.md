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


## 2. He who is not courageous enough to take risks will accomplish nothing in life

A function that concatenates two strings.

```
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to the newly allocated space in memory which
 * contains the contents of s1 followed by the contents of s2 and
 * null terminated. Otherwise NULL, if on failure.
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, k, size;
	char *str;

	i = 0;
	j = 0;
	if (*s1 == NULL)
	{
		i = 0;
	}
	else
	{
		while (*(s1 + i) != '\0')
			i++;
	}

	if (*s2 == NULL)
	{
		j = 0;
	}
	else
	{
		while (*(s2 + j) != '\0')
			j++;
	}
	size = i + j - 1;

	str = malloc(size * sizeof(char));
	if (str == NULL)
		return (NULL);

	k = 0;
	while (k < i)
	{
		str[k] = s1[k];
		k++;
	}

	while ((k + j) < size)
	{
		str[k + j] = s2[j];
		j++;
	}

	str[k + j] = '\0';

	return (str);
}
```


Actual solution in [2-str_concat.c](./2-str_concat.c)
