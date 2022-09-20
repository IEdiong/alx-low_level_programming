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
 * puts_half - prints half of a string
 * @str: string to be printed in half
 */

void puts_half(char *str)
{
	int i, start, len;

	len = 0;
	while (str[len] != '\0')
		len++;

	if (len % 2 == 1)
		start = (len - 1) / 2;
	else
		start = len / 2;

	i = 0;
	for (i = start; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
