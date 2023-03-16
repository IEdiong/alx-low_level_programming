#include <stdlib.h>
#include "main.h"

/**
 * _min - returns the smallest of two numbers
 * @num1: first number to compare
 * @num2: second number to compare
 *
 * Return: smallest of two positive numbers
 */
unsigned int _min(unsigned int num1, unsigned int num2)
{
	if (num1 > num2)
		return (num2);
	return (num1);
}


/**
 * _realloc - creates an array of integers
 * @ptr: pointer to previous memory block
 * @old_size: size of previous memory block
 * @new_size: size of new memory block
 *
 * Return: pointer to the newly created array.
 * Otherwise NULL if min is greater than max or malloc fails.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr, *prev_ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);

	prev_ptr = ptr;
	for (i = 0; i < _min(new_size, old_size); i++)
		new_ptr[i] = prev_ptr[i];

	free(ptr);
	return (new_ptr);
}
