#include "main.h"

/**
 * _puts_recursion - recursive function to print a string
 * @s: string to be printed out
 */

void _puts_recursion(char *s)
{
	unsigned int i;

	i = 0;
	if (s[i] == '\0')
		return;
	_putchar(s[i]);
	i++;
	_puts_recursion(&s[i]);
}
