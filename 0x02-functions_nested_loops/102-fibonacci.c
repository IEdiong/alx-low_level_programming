#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: On Success 0.
 */
int main(void)
{
	int i, sum;

	sum = 1;
	for (i = 0; i < 50; i++)
	{
		sum += i;
		printf("%d", sum);

		if (i != 49)
			printf(", ");
	}
	printf("\n");

	return (EXIT_SUCCESS);
}
