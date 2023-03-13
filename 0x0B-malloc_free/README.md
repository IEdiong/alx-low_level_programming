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
