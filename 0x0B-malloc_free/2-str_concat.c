#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to the newly allocated space in memory which
 * contains the contents of s1 followed by the contents of s2 and
 * null terminated. Otherwise NULL, if on failure.
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, k, size;
	char *str;

	i = 0;
	j = 0;
	if (s1 != NULL)
	{
		while (*(s1 + i) != '\0')
			i++;
	}
	if (s2 != NULL)
	{
		while (*(s2 + j) != '\0')
			j++;
	}

	size = i + j + 1;
	str = malloc(size * sizeof(char));
	if (str == NULL)
		return (NULL);
	k = 0;
	while (k < i)
	{
		str[k] = s1[k];
		k++;
	}

	j = 0;
	while ((k + j) < size)
	{
		str[k + j] = s2[j];
		j++;
	}
	str[k + j] = '\0';
	return (str);
}
