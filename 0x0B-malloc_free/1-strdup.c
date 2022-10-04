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
	int strlen;
	int i;

	i = 0;
	strlen = 0;
	while (str[i])
	{
		strlen++;
		i++;
	}
	new_str = malloc(sizeof(char) * strlen);
	if (new_str == NULL)
		return (NULL);
	i = 0;
	while (i < strlen)
	{
		new_str[i] = str[i];
		i++;
	}
	return (new_str);
}
