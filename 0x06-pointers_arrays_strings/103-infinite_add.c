#include "main.h"
/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: result
 * @size_r: result length
 * Return: sum
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, j = 0, k, g = 0, f, s, d = 0;
	/* get the length of the two numbers */
	while (n1[i] != '\0')
		i++;
	while (n2[j] != '\0')
		j++;
	/* get the greater in length of the two */
	if (i > j)
		g = i;
	else
		g = j;
	/* check if size_r can contain the greater number + '\0' */
	if (g + 1 > size_r)
		return (0);
	r[g] = '\0';
	for (k = g - 1 ; k >= 0 ; k--)
	{
		i--;
		j--;
		if (i >= 0)
			f = n1[i] - '0';
		else
			f = 0;
		if (j >= 0)
			s = n2[j] - '0';
		else
			s = 0;
		r[k] = (f + s + d) % 10 + '0';
		d = (f + s + d) / 10;
	}
	if (d == 1)
	{
		r[g + 1] = '\0';
		if (g + 2 > size_r)
			return (0);
		while (g-- >= 0)
			r[g + 1] = r[g];
		r[0] = d + '0';
	}
	return (r);
}
