# 0x0A. C - argc, argv

## 0. It ain't what they call you, it's what you answer to

A `c` program that prints its name, followed by a new line. If the program is renamed without having to compile it again, it will print the new name.

```
#include <stdio.h>
#include "main.h"

/**
 * main - prints the program name followed by a new line
 * @argc: arguments count
 * @argv: arguments vector
 *
 * Return: Always 0 (Success)
 */

int main(int __attribute((__unused__)) argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
```

> `__attribute((__unused__))` suppresses all warnings with regards to unused variables or parameters.

Actual solution in [0-whatsmyname.c](./0-whatsmyname.c)

## 1. Silence is argument carried out by other means

A `c` program that prints the number of arguments passed into it.

```
#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments passed into it
 * @argc: arguments count
 * @argv: arguments vector
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char **argv __attribute((__unused__)))
{
	printf("%d\n", argc - 1);
	return (0);
}
```

> We supress the compiler's warning with `__attribute((__unused__))`, since we would not be using the `**argv` parameter in the program body. A better way of writing it is by putting the variable name before the `__attribute((__unused__))`.

Actual solution in [1-args.c](./1-args.c)

## 2. The best argument against democracy is a five-minute conversation with the average voter 

A `c` program that prints all arguments it receives.

```
#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments passed into it
 * @argc: arguments count
 * @argv: arguments vector
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
```


Actual solution in [2-args.c](./2-args.c)


3. Neither irony nor sarcasm is argument

A program that multiplies two numbers.

```
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - multiplies two numbers
 * @argc: arguments count
 * @argv: arguments vector
 *
 * Return: Always 0 (Success). Otherwise 1, if arguments passed to the program is less than 2.
 */

int main(int argc __attribute__((unused)), char **argv)
{
	int x, y;

	if (argc > 2)
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		printf("%d\n", x * y);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
```

> `atoi` is used to convert the arguments, which are strings, into `int` type.

Actual solution in [3-mul.c](./3-mul.c)


## 4. To infinity and beyond

A program that adds positive numbers.

```
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 * @argc: arguments count
 * @argv: arguments vector
 *
 * Return: Always 0 (Success). Otherwise 1.
 */

int main(int argc, char *argv[])
{
	int i, j, sum;

	sum = 0;
	if (argc < 2)
	{
		printf("%d\n", sum);
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
```

Actual solution in [4-add.c](./4-add.c)


## 5. Minimal Number of Coins for Change

A prgram that prints the minimum number of coins to make change for an amount of money.

```
#include <stdio.h>
#include <stdlib.h>

int return_change(int money);
/**
 * main - prints the minimum number of coins to make change
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
```

Actual solution in [100-change.c](./100-change.c)
