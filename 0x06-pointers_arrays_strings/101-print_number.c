#include "main.h"

/**
 * print_number - prints an integer
 * @n: number to be printed
 */
void print_number(int n)
{
	unsigned int num;
	int exp;

	if (n >= 0 && n < 10)
	{
		_putchar(n + '0');
		return;
	}
	if (n < 0)
	{
		num = -n;
		_putchar('-');
	}
	else
	{
		num = n;
	}

	exp = 0;
	while (num >= 10)
	{
		exp++;
		num = num / 10;
	}

	if (num >= 10)
	{
		print_number(num / 10);
	}
	_putchar((num % 10) + '0');
}
