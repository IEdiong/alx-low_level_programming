#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: length of the line '\'
 */

void print_diagonal(int n)
{
	int i = 0;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	while (i < n)
	{
		j = i;
		while (j > 0)
		{
			_putchar(' ');
			j--;
		}
		_putchar('\\');
		_putchar('\n');
		i++;
	}
}
