/**
 * is_sep - checks if a character is a seperator
 * @s: the character to test
 *
 * Return: 1 if seperator is found else 0
 */

int is_sep(char s)
{
	char sep[] = {'\t', '\n', ' ', ';', '.', '!', '?', '\"', '(', ')', '{', '}'};
	int i = 0;

	while (sep[i] != '\0')
	{
		if (s == sep[i])
			return (1);
		i++;
	}
	return (0);
}

/**
 * cap_string - capitalizes all words of a string
 * @s: string to be processed
 *
 * Return: pointer to the modified string
 */

char  *cap_string(char *s)
{
	int sep, i;

	sep = 1;
	i = 0;
	while (s[i] != '\0')
	{
		if (sep == 1 && (s[i] >= 'a' && s[i] <= 'z'))
		{
			s[i] -= 32;
			sep = 0;
		}
		sep = is_sep(s[i]);
		i++;
	}
	return (s);
}
