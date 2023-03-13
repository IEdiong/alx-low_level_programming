#include <stdlib.h>

/**
 * _strdup - Creates an array of chars
 * @str: string to copy
 *
 * Return: pointer to the beginning of the duplicated string. Otherwise NULL,
 * if str is NULL or if insufficient memory was available.
 */

char *_strdup(char *str)
{
	char *new_str;
	unsigned int i;
	unsigned int size;

	if (str == NULL)
		return (NULL);

	size = i = 0;
	while (str[i] != '\0')
	{
		size++;
		i++;
	}

	size++;
	new_str = malloc(size * sizeof(char));
	if (new_str == NULL)
		return (NULL);

	i = 0;
	while (i < size)
	{
		*(new_str + i) = *(str + i);
		i++;
	}


	return (new_str);
}
