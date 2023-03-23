#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
 * main - performs simple arthmetic operations
 * @argc: arguments count
 * @argv: arguments vector
 *
 * Return: 0 on success. Otherwise 98 if number of
 *         arguments is wrong, 99 if the operator is
 *         invalid or 100 if user tries to divide (/ or %)
 *         by 0.
 */
int main(int argc, char *argv[])
{
	int arg1, arg2;
	char o;
	int (*opr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	opr = get_op_func(argv[2]);

	if (!opr)
	{
		printf("Error\n");
		exit(99);
	}

	o = *argv[2];
	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[3]);
	if (((o == '/') || (o == '%')) && (arg2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", opr(arg1, arg2));

	return (0);
}
