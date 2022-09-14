#include "main.h"

/**
 * _islower - Checks for lowercase character
 * @c: The character to be checked
 *
 * Return: 1 if character is lowercase. 0 Otherwise.
 */
int _islower(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
