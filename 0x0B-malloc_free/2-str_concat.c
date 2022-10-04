#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: prefixing string
 * @s2: suffixing string
 *
 * Return: pointer to a new string. Otherwise NULL
 */

char *str_concat(char *s1, char *s2)
{
	int len1;
	int len2;
	int i;
	int j;
	char *new_str;

	len1 = 0;
	while (s1[len1] != '\0')
		len1++;

	len2 = 0;
	while (s2[len2] != '\0')
		len2++;

	new_str = malloc(sizeof(char) * (len1 + len2 + 1));
	if (new_str == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		new_str[i] = s1[i];

	for (j = 0; j < len2; j++)
		new_str[i] = s2[j];

	return (new_str);
}
