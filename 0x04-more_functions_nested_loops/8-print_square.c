#include "main.h"

/**
 * print_square - prints a square using the '#'
 * @size: size of the square
 */

void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (j = size ; j > 0 ; j--)
	{
		for (i = size ; i > 0 ; i--)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
