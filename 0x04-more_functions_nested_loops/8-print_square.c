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
		_putchar(32);
		return;
	}

	for (j = 0; j < size; j++)
	{
		for (i = 0; i < size; i++)
			_putchar('#');
		_putchar(32);
	}
}
