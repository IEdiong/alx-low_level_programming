#include "main.h"

/**
 * _print_triangle - prints a triangle.
 * @size: size of the triangle 
 */
void print_triangle(int size)
{
	int row, i, j;

	if (size < 1)
	{
		_putchar('\n');
		return;
	}
	
	row = 0;
	while (row < size)
	{
		for (i = 0; i < size - row + 1; i++)
		{
			_putchar(32);
		}

		for (j = 0; j < row + 1; j++)
		{
			_putchar(35);
		}
		_putchar('\n');
		row++;
	}
	return;
}
