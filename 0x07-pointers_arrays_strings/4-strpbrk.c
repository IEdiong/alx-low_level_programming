#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to be searched
 * @accept: bytes of string to be searched for
 *
 * Return: pointer to the byte in s that matches one of the bytes
 * in accept or NULL if no such byte is found.
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[i] != '\0'; j++)
		{
			if (accept[i] == s[i])
				return ((s + i));
		}
	}
	return (NULL);
}
