#include <string.h>

/**
 * _strcmp - compares two strings
 *
 * @s1: first string to be compared
 * @s2: second string to be compared
 *
 * Return: an integer less than zero if s1 is less than s2,
 * integer greater than zero if s1 is greater than s2 and
 * zero if s1 is equal to s2.
 */

int _strcmp(char *s1, char *s2)
{
	int res;

	res = strcmp(s1, s2);
	return (res);
}
