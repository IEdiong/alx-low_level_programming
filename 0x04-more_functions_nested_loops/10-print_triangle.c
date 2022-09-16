#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 *
 *
 */

void print_triangle(int size)
{
	int v, h, margin, dis;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	dis = size - 1
	for (v = 0 ; v < size ; v++)
	{
		margin = 0;
		while (margin < (dis - 1))
		{
			_putchar(32);
			margin++;
		}

		h = size - margin;

		while (h > 0)
		{
			_putchar('#');
			h--;
		}
		_putchar('\n');
	}
}
