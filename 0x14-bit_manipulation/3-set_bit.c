#include "main.h"

/**
 * set_bit - sets the value of a bit to 1
 * @n: address of number to set
 * @index: index of bit
 *
 * Return: 1 on Success. Otherwise -1.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);

	*n |= (1 << index);
	return (1);
}
