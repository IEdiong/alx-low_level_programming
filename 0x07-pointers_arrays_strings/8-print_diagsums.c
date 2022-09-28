#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the diagonals
 * @a: the first integer in the square matrix
 * @size: size of the matrix
 */

void print_diagsums(int *a, int size)
{
	int i;
	unsigned int lr_sum, rl_sum;

	lr_sum = 0;
	rl_sum = 0;
	for (i = 0; i < size; i++)
	{
		lr_sum += a[(size * i) + i];
		rl_sum += a[(size * (i + 1)) - (i + 1)];
	}
	printf("%d, %d\n", lr_sum, rl_sum);
}
