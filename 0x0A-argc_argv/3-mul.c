#include <stdio.h>
#include "main.h"

/**
 * main - multiplies two numbers
 * @argc: arguments count
 * @argv: arguments vector
 *
 * Return: Always 0 (Success). Otherwise 1.
 */

int main(int argc __attribute__((unused)), char **argv)
{
	int x, y;

	x = argv[1];
	y = argv[2];
	if (argc > 2)
	{
		printf("%d\n", x * y);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
