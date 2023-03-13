#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars and initializes it with a char
 * @size: size of the memory to be allocated
 * @c: char to initialize the array with
 *
 * Return: pointer to the array. Otherwise NULL if size is zero
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ptr = malloc(sizeof(char) * size);
	if (ptr == NULL)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\0');
		return (NULL);
	}
	i = 0;
	while (i < size)
		*(ptr + i++) = c;
	return (ptr);
}
