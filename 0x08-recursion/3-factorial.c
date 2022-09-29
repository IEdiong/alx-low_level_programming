#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: number
 *
 * Return: factorial of n. Otherwise return -1 if n is less than
 * zero.
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (1);
	return (factorial(n - 1));
}
