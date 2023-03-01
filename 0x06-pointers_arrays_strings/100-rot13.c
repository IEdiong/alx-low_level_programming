/**
 * rot13 - encodes a string using the rot13
 * @s: string to encode
 *
 * Return: pointer to the encoded string
 */

char *rot13(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		if ((s[i] >= 'a' && s[i] <= 'm') || (s[i] >= 'A' && s[i] <= 'M'))
		{
			*(s + i) =  s[i] + 13;
		}
		else if ((s[i] >= 'n' && s[i] <= 'z') || (s[i] >= 'N' && s[i] <= 'Z'))
		{
			*(s + i) = s[i] - 13;
		}
		i++;
	}
	return (s);
}
