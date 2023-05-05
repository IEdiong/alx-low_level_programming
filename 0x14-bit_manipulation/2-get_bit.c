#include <stdlib.h>
#include "main.h"

/**
 * get_bit - get the bit at a given index
 * @n: decimal number
 * @index: index
 *
 * Return: bit at index. Otherwise -1.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 64)
		return (-1);

	return ((n >> index) & 1);
}
