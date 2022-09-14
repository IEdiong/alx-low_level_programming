#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @n: The number whose last digit is to be printed.
 *
 * Return: The last digit of the number.
 */
int print_last_digit(int n)
{
	n = n % 10;
	if (n < 1)
	{
		n = n * -1;
	}
	_putchar('0' + n);
	return (n);
}
