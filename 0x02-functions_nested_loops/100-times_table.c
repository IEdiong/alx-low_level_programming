#include "main.h"

/**
 * print_multiple - prints the product of two numbers
 * @j: first number
 * @i: second number
 */


void print_multiple(int j, int i)
{
	int hun, tenth, unit;

	if (j == 0)
	{
		_putchar(48);
	}
	else if (j * i < 10)
	{
		_putchar(32);
		_putchar(32);
		_putchar(32);
		_putchar(48 + j * i);
	}
	else if (j * i < 100)
	{
		tenth = (j * i) / 10;
		unit = (j * i) % 10;
		_putchar(32);
		_putchar(32);
		_putchar(48 + tenth);
		_putchar(48 + unit);
	}
	else
	{
		hun = (j * i) / 100;
		tenth = ((j * i) / 10) % 10;
		unit = (j * i) % 10;
		_putchar(32);
		_putchar(48 + hun);
		_putchar(48 + tenth);
		_putchar(48 + unit);
	}
}

/**
 * print_times_table - prints the n times table, starting with 0.
 * @n: number of timetable
 */

void print_times_table(int n)
{
	if (n >= 0 && n <= 15)
	{
		int i, j;

		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				print_multiple(j, i);
				if (j != n)
					_putchar(44);
			}
			_putchar('\n');
		}
	}
}
