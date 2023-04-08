#include <stdlib.h>
#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: decimal number to be converted
 */
void print_binary(unsigned long int n)
{
	int i;
	unsigned long int sum;

	i = 0;
	sum = n;
	do {
		sum >>= 1;
		i++;
	} while (sum > 0);

	i--;
	while (i >= 0)
	{
		sum = n >> i;
		_putchar((sum & 1) + '0');
		i--;
	}
}
