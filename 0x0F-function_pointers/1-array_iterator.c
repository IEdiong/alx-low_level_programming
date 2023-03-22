#include <stdlib.h>

/**
 * array_iterator - execute a callback function on elements of an array
 * @array: array to be operated on
 * @size: size of the array
 * @action: callback function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
