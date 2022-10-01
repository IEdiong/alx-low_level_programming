#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: arguments count
 * @argv: arguments vector
 *
 * Return: Always 0 (Success). Otherwise 1.
 */

int main(int argc, char **argv)
{
	int x, kudi, change;
	int coins[] = {25, 10, 5, 2, 1};

	change = 0;
	if (argc < 0)
	{
		printf("%d\n", change);
		return (0);
	}
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	x = 0;
	kudi = atoi(argv[1]);
	while (kudi)
	{
		if (coins[x] <= kudi)
		{
			kudi -= coins[x];
			change++;
			continue;
		}
		x++;
	}
	printf("%d\n", change);
	return (0);
}
