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
	unsigned int len1, len2, i, j, k, size;
	char *str;

	len1 = len2 = k = 0;
	if (s1 != NULL)
	{
		while (*(s1 + len1) != '\0')
			len1++;
	}
	if (s2 != NULL)
	{
		while (*(s2 + len2) != '\0')
			len2++;
	}

	size = len1 + len2 + 1;
	str = malloc(size * sizeof(char));
	if (str == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		str[k] = s1[i];

	for (j = 0; j < len2; j++)
	{
		str[k] = s2[j];
		k++;
	}

	str[k] = '\0';


	return (str);
}
