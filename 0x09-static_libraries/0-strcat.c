
/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 *
 * Return: pointer to resulting string dest.
 */

char *_strcat(char *dest, char *src)
{
	int idx_dest = 0;
	int idx_src = 0;

	while (dest[idx_dest] != '\0')
		idx_dest++;

	while (src[idx_src] != '\0')
	{
		dest[idx_dest + idx_src] = src[idx_src];
		idx_src++;
	}
	dest[idx_dest + idx_src] = '\0';

	return (dest);
}
