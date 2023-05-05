#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * flip_bits - cal the number of bits required to from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to be flipped.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i, bits, isSame;

	i = bits = 0;
	do {
		isSame = (n ^ m) & 1;
		if (isSame)
			bits++;
		n >>= 1;
		m >>= 1;
		i++;
	} while (i < 64);

	return (bits);
}
