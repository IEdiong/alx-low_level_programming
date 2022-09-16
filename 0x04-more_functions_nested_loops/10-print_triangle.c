#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 */

void print_triangle(int size)
{
	int v, h, spc, dist;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	dist = size - 1
	for (v = 0 ; v < size ; v++)
	{
		spc = 0;
		while (spc < (dist - 1))
		{
			_putchar(32);
			spc++;
		}

		h = size - spc;

		while (h > 0)
		{
			_putchar('#');
			h--;
		}
		_putchar('\n');
	}
}
