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

	i = 0;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
		i++;

	new_str = malloc(sizeof(char) * (i + 1));
	if (new_str == NULL)
		return (NULL);

	j = 0;
	while (j < (i + 1))
	{
		new_str[j] = str[j];
		j++;
	}

	return (new_str);
}
