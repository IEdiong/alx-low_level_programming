#include "main.h"

/**
 * _strchr - locates the first occurence of char in a string
 * @s: string to be parsed
 * @c: char to be searched for
 *
 * Return: pointer to the first occurence of the char c otherwise NULL.
 */

char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return ((s + i));
		i++;
	}
	if (c == '\0')
		return ((s + i));
	return (NULL);
}
