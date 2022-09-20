#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */

void rev_string(char *s)
{
	int i, last, end, temp;

	last = 0;
	end = 0;

	while (s[end] != '\0')
		end++;

	last = end - 1;
	for (i = 0; i < end / 2; i++)
	{
		temp = s[i];
		s[i] = s[last];
		s[last] = temp;
		last--;
	}
}
