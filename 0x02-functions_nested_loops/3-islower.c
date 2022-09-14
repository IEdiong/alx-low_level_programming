#include "main.h"

/**
 * _islower - Checks for lowercase character
 * @c: The character to be checked
 *
 * Return: 1 if character is lowercase. 0 Otherwise.
 */
int _islower(int c)
{
	int i = _putchar(c + '0');

	if (i >= 97 && i <= 122)
		return (1);
	else
		return (0);
}
