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
 * puts2 - prints every two character of a string, skipping one
 * @str: string parameter
 */

void puts2(char *str)
{
	int i, n;

	n = 0;
	while (str[n] != '\0')
		n++;
	for (i = 0; i < n; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
