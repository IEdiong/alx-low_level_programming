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
	unsigned int len1, len2, i, j, size;
	char *str;

	len1 = len2 = 0;
	if (s1 != NULL)
	{
		while (*(s1 + len1) != '\0')
			len1++;
	}
	if (s2 != NULL)
	{
		while (*(s2 + len2) != '\0')
			len2++;
	}

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

Actual solution in [2-str_concat.c](./2-str_concat.c)


## 3. If you even dream of beating me you'd better wake up and apologize

A function that returns a pointer to a 2 dimensional array of integers.

```
#include <stdlib.h>

/**
 * alloc_grid - creates a two dim array of integers
 * @width: number of column
 * @height: number of rows
 *
 * Return: pointer to a new matrix. Otherwise NULL
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	if (width < 1 || height < 1)
		return (NULL);

	grid = (int **)malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			free(grid);
			for (j = 0; j <= i; j++)
				free(grid[j]);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}

	return (grid);
}
```

> The trick is to first create a double pointer that points to an array of pointers. Then loop through each pointer and make them point to an array of int.

Actual solution in [3-alloc_grid.c](./3-alloc_grid.c)


## 4. It's not bragging if you can back it up

A function that frees a 2 dimensional grid previously created by `alloc_grid` function.

```
#include <stdlib.h>

/**
 * free_grid - frees up a 2 dim grid
 * @grid: grid memory area to be freed
 * @height: number of rows
 */
void free_grid(int **grid, int height)
{
	int i;

	free(grid);
	for (i = 0; i < height; i++)
		free(grid[i]);
}
```

Actual solution in [4-free_grid.c](./4-free_grid.c)
