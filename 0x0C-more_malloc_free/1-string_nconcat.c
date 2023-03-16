#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: first part of the string
 * @s2: second part of the string
 * @n: size of second string to concatenate
 *
 * Return: pointer to the concatenated string in memory.
 * Otherwise NULL if malloc fails.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, i, j, size;
	char *str;

	len1 = len2 = 0;
	if (s1 != NULL)
	{
		while (s1[len1] != '\0')
			len1++;
	}
	if (s2 != NULL)
	{
		while (s2[len2] != '\0')
			len2++;
	}

	if (len2 > n)
		len2  = n;

	size = len1 + len2 + 1;
	str = malloc(size * sizeof(char));
	if (str == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		str[i] = s1[i];

	for (j = 0; j < len2; j++)
	{
		str[i] = s2[j];
		i++;
	}

	str[i] = '\0';

	return (str);
}
