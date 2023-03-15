#include <stdlib.h>

/**
 * argstostr - concatenates all args of the program
 * @ac: arguments count
 * @av: arguments vector
 *
 * Return: pointer to a string. Otherwise, NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, arg, byte, size = ac;

	if (ac == 0 || av == NULL)
		return (NULL);

	/* size = ac, is the number of bytes required for the '\n' */
	for (arg = 0; arg < ac; arg++)
	{
		for (byte = 0; av[arg][byte]; byte++)
			size++;
	}

	str = malloc((size + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);

	i = 0;
	for (arg = 0; arg < ac; arg++)
	{
		for (byte = 0; av[arg][byte]; byte++)
		{
			str[i] = av[arg][byte];
			i++;
		}
		str[i] = '\n';
		i++;
	}

	str[size] = '\0';

	return (str);
}
