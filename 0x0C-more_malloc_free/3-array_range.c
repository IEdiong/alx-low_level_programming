#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: minimum value (included)
 * @max: maximum value (included)
 *
 * Return: pointer to the newly created array.
 * Otherwise NULL if min is greater than max or malloc fails.
 */

int *array_range(int min, int max)
{
	int *arr;
	int size, num, i;

	size = 1;
	num = min;
	if (min > max)
		return (NULL);

	size += max - min;
	arr = malloc(size * sizeof(int));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		*(arr + i) = num;
		num++;
	}

	return (arr);
}
