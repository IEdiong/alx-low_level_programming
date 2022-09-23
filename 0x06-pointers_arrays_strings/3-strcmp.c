
/**
 * _strcmp - compares two strings
 *
 * @s1: first string to be compared
 * @s2: second string to be compared
 *
 * Return: an integer less than zero if s1 is less than s2,
 * integer greater than zero if s1 is greater than s2 and
 * zero if s1 is equal to s2.
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] > s2[i])
			return (15);
		else if (s1[i] < s2[i])
			return (-15);
		i++;
	}
	if (s1[i] == '\0' && s2[i] == '\0')
		return (0);
	else if (s1[i] != '\0')
		return (15);
	else
		return (-15);
}
