#include "main.h"

int prime_num(int n, int i);

/**
 * is_prime_number - check if a number is a prime
 * @n: number
 *
 * Return: 1. Otherwise 0 if n is not a prime number.
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_num(n, n - 1));
}

/**
 * prime_num - helper function
 * @n: number
 * @i: number to test with
 *
 * Return: 1 if a prime otherwise 0
 */

int prime_num(int n, int i)
{
	if (i == 1)
		return (1);
	else if (n % i == 0)
		return (0);
	else if (n % i != 0)
		return (prime_num(n, i - 1));
	return (0);
}
