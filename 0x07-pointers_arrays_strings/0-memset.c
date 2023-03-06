/**
 * _memset - fills memory with a constant byte
 * @s: pointer to memory area to be filled
 * @b: constant byte
 * @n: first number of bytes to be filled
 *
 * Return: pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*(s + i) = b;
		i++;
	}

	return (s);
}
