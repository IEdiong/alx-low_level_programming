#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: first integer value to be swapped
 * @b: second integer value to be swapped
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
