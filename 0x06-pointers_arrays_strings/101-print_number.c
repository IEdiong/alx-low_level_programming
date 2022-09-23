#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);

/**
 * print_number - prints an integer
 * @n: number to be printed
 */

void print_number(int n)
{
	unsigned int num;

	if (n < 10 && n >= 0)
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

	if (num >= 10)
	{
		print_number(num / 10);
	}
	_putchar((num % 10) + '0');
}
