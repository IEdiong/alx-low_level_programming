/**
 * leet - encodes a string
 * @s: string to be encoded
 *
 * Return: pointer to the encoded string
 */

char *leet(char *s)
{
	char *l = "aeotl";
	char *u = "AEOTL";
	char *n = "43071";
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
