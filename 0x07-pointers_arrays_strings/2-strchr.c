/**
 * _strchr - locates a char in a string
 * @s: string to be parsed
 * @c: character to be searched for
 *
 * Return: pointer to the first occurence of the character c
 */

char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s)
		if (s[i] == c)
			return (&s[i]);
		i++;
	return (NULL);
}
