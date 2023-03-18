#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: On Success 0.
 */
int main(void)
{
	long int curr, prev, sum;
	int i;

	printf("1, 2, ");
	prev = 1;
	curr = 2;
	for (i = 2; i < 50; i++)
	{
		sum = curr + prev;
		printf("%ld", sum);
		prev = curr;
		curr = sum;

		if (i != 49)
			printf(", ");
	}
	printf("\n");

	return (EXIT_SUCCESS);
}
