#include <stdlib.h>

/**
 * word_len - Finds the index marking the end of the
 *	      first word contained within a string.
 * @str: the string to be searched.
 *
 * Return: The index marking the end of the initial word pointed to by str.
 */
int word_len(char *str)
{
	int i, len;

	i = len = 0;
	while (*(str + i) && *(str + i) != ' ')
	{
		i++;
		len++;
	}

	return (len);
}

/**
 * count_words - Counts the number of words contained in a string.
 * @str: the string to be searched.
 *
 * Return: The number of words contained in the string.
 */
int count_words(char *str)
{
	int i, words, len;

	i = words = len = 0;

	/* get the length of the string */
	while (*(str + i++) != '\0')
		len++;

	for (i = 0; i < len; i++)
	{
		if (*(str + i) != ' ')
		{
			words++;
			i = word_len(str + i);
		}
	}

	return (words);
}

/**
 * strtow - splits a string into words
 * @str: string to work on
 *
 * Return: a pointer to an array of strings (words).
 * Otherwise NULL if str == NULL or str == "".
 */
char **strtow(char *str)
{
	char **strings;
	int i, j, k, words, letters;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	words = count_words(str);
	if (words == 0)
		return (NULL);

	strings = (char **)malloc((words + 1) * sizeof(char *));
	if (strings == NULL)
		return (NULL);

	k = 0;
	for (i = 0; i < words; i++)
	{
		while (str[k] == ' ')
			k++;

		letters = word_len(str + k);

		strings[i] = malloc((letters + 1) * sizeof(char));
		if (strings[i] == NULL)
		{
			for (; i >= 0; i--)
				free(strings[i]);
			free(strings);
			return (NULL);
		}

		for (j = 0; j < letters; j++)
			strings[i][j] = str[k++];

		strings[i][j] = '\0';
	}
	strings[i] = NULL;

	return (strings);
}
