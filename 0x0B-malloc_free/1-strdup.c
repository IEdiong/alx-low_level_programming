#include <stdlib.h>
#include "main.h"

/**
 * _strdup - allocates new space in memory containing a copy of the a string
 * @str: string parameter
 *
 * Return: pointer to a new string which is a duplicate of str.
 */

char *_strdup(char *str)
{
	char *new_str;
	int i;
	int j;
	char *s;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	new_str = malloc(sizeof(char) * (i + 1));
	s = "failed to allocate memory";
	if (new_str == NULL)
	{
		while (*s++)
		{
			_putchar(s);
			_putchar('\n');
		}
		return (NULL);
	}
	j = 0;
	while (j < (i + 1))
	{
		new_str[j] = str[j];
		j++;
	}
	return (new_str);
}
