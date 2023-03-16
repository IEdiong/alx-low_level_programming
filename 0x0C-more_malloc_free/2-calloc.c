#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each element in the array
 *
 * Return: pointer to the allocated memory.
 * Otherwise NULL if nmemb or size is 0 and malloc fails.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		*(arr + i) = 0;

	return (arr);
}
