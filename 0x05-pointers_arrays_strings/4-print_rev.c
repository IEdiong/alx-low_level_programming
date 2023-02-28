#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);

/**
 * print_rev - prints string in reverse
 * @s: string to reverse
 */

void print_rev(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
		i++;

	while (i > 0)
	{
		i--;
		_putchar(*(s + i));
	}
	_putchar('\n');
}
