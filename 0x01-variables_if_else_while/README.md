# 0x01. C - Variables, if, else, while

## 0. Positive anything is better than negative nothing.
A `C` program that outputs the number `n` followed by `is positive` if the number is greater than 0, `is zero` if the number is 0 or `is negative` if the number is less than 0; followed by a new line.

```
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
```

> Basic `if...else if...else` statement. 

Actual solution in [0-positive_or_negative.c](./0-positive_or_negative.c)


## 1. The last digit 
A `C` program that checks the last digit of a randomly generated number and coditional outputs different strings. 

```
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n % 10 < 6 && n % 10 != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n % 10);
	else if (n % 10 > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, n % 10);
	else
		printf("Last digit of %d is %d and is 0\n", n, n % 10);
	return (0);
}
```

> Basic `if...else if...else` statement.

Actual solution in [1-last_digit.c](./1-last_digit.c)

## 2. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game. 
A `C` program that prints the alphabet in lowercase, followed by a new line. The program uses only the `putchar` function; and it uses it only twice in the code. 

```
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
		putchar(c);
	putchar('\n');
	return (0);
}
```

> Basic `while` loop.

> `putchar` function prints to the standard output a character.

> Betty coding style permits a space between the `while` keyword and opening parenthesis `(`, but no space around (inside) parenthesized expressions. This example is bad: `while ( c <= 'z')`.

Actual solution in [2-print_alphabet.c](./2-print_alphabet.c)

## 3. alphABET 
A `C` program that prints the alphabet in lowercase, and then in uppercase, followed by a new line.The program uses only the `putchar` function; and it uses it only thrice in the code. 

```
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)	
		putchar(c);

	for (c = 'A'; c <= 'Z'; c++)
		putchar(c);

	putchar('\n');
	return (0);
}
```

> Basic `for` loop.


Actual solution in [3-print_alphabets.c](./3-print_alphabets.c)

## 4. When I was having that alphabet soup, I never thought that it would pay off. 
A `C` program that prints the alphabet in lowercase, and then in uppercase, followed by a new line.The program prints all the letters except `q` and `e`. The program uses only the `putchar` function; and it uses it only twice in the code. 

```
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		if (!(c == 'q' || c == 'e'))
			putchar(c);

	putchar('\n');
	return (0);
}
```

> Basic combination of a `for` loop and an `if` statement.


Actual solution in [4-print_alphabt.c](./4-print_alphabt.c)

## 5. Numbers 
A `C` program that prints all single digit numbers of base `10` starting from `0`, followed by a new line.

```
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 0; c <= 9; c++)
		printf("%d", n);

	putchar('\n');
	return (0);
}
```


Actual solution in [5-print_numbers.c](./5-print_numbers.c)

## 6. Numberz 
A `C` program that prints all single digit numbers of base `10` starting from `0`, followed by a new line. The program does not use any variable of type `char`. It also uses only the `putchar` function; and that only twice in the code.

```
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	n = 0;
	while (n <= 9) 
		putchar('0' + n);

	putchar('\n');
	return (0);
}
```

> The arguments to `putchar` is [the ascii code](https://www.asciitable.com/) of the `char` you want to print. The digit `0` through to `9` are encoded as the consecutive numbers `48` through `57`. So, to print the one-digit number `n` you need to add either `48` or the ascii code `'0'`to the number `n`. Source: [stackoverflow](https://stackoverflow.com/questions/73737032/printing-int-using-putchar-in-c).

Actual solution in [6-print_numberz.c](./6-print_numberz.c)
