#include "main.h"

int helper_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - returns the natural square root
 * @n: number
 *
 * Return: natural square root. Otherwise if n does not
 * have a natural square root -1.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (helper_sqrt_recursion(n, 0));
}

/**
 * helper_sqrt_recursion - recurses to find the root
 * @n: number
 * @i: iterator
 *
 * Return: the square root
 */

int helper_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (helper_sqrt_recursion(n, i + 1));
}
