# 0x07. C - Even More Pointers, Arrays and Strings

## 0. memset

A function that fills memory with a constant byte. 

```
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
```

> This can be written with either a `for` loop or a `while` loop.

Actual solution in [0-memset.c](./0-memset.c)
