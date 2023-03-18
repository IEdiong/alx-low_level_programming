#include <stdio.h>
#include <stdlib.h>


/**
 * main - prints the sume of all the multiples
 *	  of 3 or 5 below 1024 (excluded)
 * Return: On success 0.
 */
int main(void)
{
	int i, sum;

	for (i = 2; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}

	printf("%d\n", sum);
	return (EXIT_SUCCESS);
}
