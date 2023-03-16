#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _isdigit - checks if a string contains a non-digit
 * @s: string to be checked
 *
 * Return: 1 if it does not contain a non-digit. 0 otherwise.
 */
int _isdigit(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (s[i] < 48 || s[i] > 57)
			return (0);
		i++;
	}
	return (1);
}


/**
 * print_err - prints error to the standard output
 *
 * Return: exit with a status of 98
 */
int print_err()
{
	_putchar('E');
	_putchar('r');
	_putchar('r');
	_putchar('o');
	_putchar('r');
	_putchar('\n');
	exit(98);
}


/**
 * _strlen - returns the length of a string
 * @s: sting to be checked
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}


/**
 * main - multiplies two numbers
 * @argc: arguments count
 * @argv: arguments vector
 *
 * Return: Always 0 (Success). Otherwise 1.
 */

int main(int argc, char **argv)
{
	int x, y;

	if (argc = 3)
	{
		/* multiply two numbers */
	}
	else
	{
		print_err();
	}
}
