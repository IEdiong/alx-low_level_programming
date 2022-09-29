#include "main.h"

/**
 * _print_rev_recursion - function to print a string in reverse
 * @s: string to be printed out in reverse
 */

void _print_rev_recursion(char *s)
{
	unsigned int i;

	i = 0;
	if (s[i] == '\0')
		return;
	i++;
	_print_rev_recursion(&s[i]);
	_putchar(s[i]);
}
