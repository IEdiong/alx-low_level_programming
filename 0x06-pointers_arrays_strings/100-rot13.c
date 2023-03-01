/**
 * rot13 - encodes a string using the rot13
 * @s: string to encode
 *
 * Return: pointer to the encoded string
 */

char *rot13(char *s)
{
	int i, j;

	char *m = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *n = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	i = 0;

	while (*(s + i) != '\0')
	{
		j = 0;
		while (*(m + j) != '\0')
		{
			if (*(m + j) == *(s + i))
			{
				*(s + i) = *(n + j);
				break;
			}
			j++;
		}
		i++;
	}
	return (s);
}
