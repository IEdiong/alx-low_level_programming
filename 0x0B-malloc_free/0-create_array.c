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
	int i;

	if (size == 0)
		return (NULL);

	ptr = malloc(sizeof(char) * size);
	i = 0;
	while(i < size)
		*(ptr + i++) = c;
	return (ptr);
}
