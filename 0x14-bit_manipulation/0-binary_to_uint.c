#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: points to a string of '0s' and '1s'
 *
 * @Description: Otherwise 0, if the is one or more chars in
 * b that are not 0 or 1, b is NULL.
 * Return: converted number.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, n, sum;

	if (b == NULL)
		return (0);

	n = 0;
	while (*(b + n) != '\0')
	{
		if (*(b + n) != '0' && *(b + n) != '1')
			return (0);
		n++;
	}

	i = sum = 0;
	while (n > 0)
	{
		sum += (*(b + n - 1) - '0') << i;
		i++;
		n--;
	}

	return (sum);
}
