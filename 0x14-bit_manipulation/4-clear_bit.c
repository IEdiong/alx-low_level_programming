#include "main.h"

/**
 * clear_bit - set the value of a bit to 0
 * @n: address of number to set
 * @index: index of bit
 *
 * Return: 1 on Success. Otherwise -1.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);

	if ((*n >> index) & 1)
		*n ^= (1 << index);

	return (1);
}
