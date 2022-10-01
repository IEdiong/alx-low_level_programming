#include <stdio.h>
#include <stdlib.h>

int return_change(int money);
/**
 * main - multiplies two numbers
 * @argc: arguments count
 * @argv: arguments vector
 *
 * Return: Always 0 (Success). Otherwise 1.
 */

int main(int argc, char **argv)
{
	int kudi, change;

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

	kudi = atoi(argv[1]);
	change = return_change(kudi);
	printf("%d\n", change);
	return (0);
}

/**
 * return_change - returns change
 * @money: money in cent
 *
 * Return: Always 0 (Success). Otherwise 1.
 */

int return_change(int money)
{
	int one, two, five, ten, twofive;

	one = two = five = ten = twofive = 0;
	if (money >= 25)
	{
		twofive = money / 25;
		money -= twofive * 25;
	}

	if (money >= 10)
	{
		ten = money / 10;
		money -= ten * 10;
	}

	if (money >= 5)
	{
		five = money / 5;
		money -= five * 5;
	}

	if (money >= 2)
	{
		two = money / 2;
		money -= two * 2;
	}

	if (money > 0)
		one = money;

	return (twofive + ten + five + two + one);
}
