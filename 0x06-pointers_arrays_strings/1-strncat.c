#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: number of character to be concatenated
 *
 * Return: pointer to resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int idx_dest = 0;
	int idx_src = 0;

	while (dest[idx_dest] != '\0')
		idx_dest++;

	while (idx_src < n && src[idx_src] != '\0')
	{
		dest[idx_dest + idx_src] = src[idx_src];
		idx_src++;
	}

	if (idx_src < n)
		dest[idx_dest + idx_src] = '\0';
	else
		dest[idx_dest + n] = '\0';

	return (dest);
}
