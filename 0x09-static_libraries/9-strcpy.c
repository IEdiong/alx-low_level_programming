/**
 * _strcpy - copies string pointed to by a pointer
 * @dest: destination
 * @src: source
 *
 * Return: the value of the destination pointer
 */

char *_strcpy(char *dest, char *src)
{
	int idx = 0;

	while (*src != '\0')
	{
		dest[idx] = *src;
		idx++;
		src++;
	}
	dest[idx] = *src;
	return (dest);
}
