/**
 * leet - encodes a string
 * @s: string to be encoded
 *
 * Return: pointer to the encoded string
 */

char *leet(char *s)
{
	char *l = ['a', 'e', 'o', 't', 'l'];
	char *u = ['A', 'E', 'O', 'T', 'L'];
	int *n = [4, 3, 0, 7, 1];
	int p = 0;
	int i;

	while (s[p] != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (s[p] == l[i] || s[p] == u[i])
				s[p] = n[i];
		}
		p++;
	}

	return (s);
}
