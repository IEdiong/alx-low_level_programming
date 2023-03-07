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

## 1. memcpy

A function that copies memory area.

```
/**
 * _memcpy - function that copies memory area
 * @dest: destination memory area
 * @src: source memory area
 * @n: number of bytes to copy
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
```

Actual solution in [1-memcpy.c](./1-memcpy.c)


## 2. strchr

A function that locates a character in a string.

```
/**
 * _strchr - locates a character in a string
 * @s: string to be searched
 * @c: character to lookup
 *
 * Return: pointer to the character. Otherwise NULL. 
 */

char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == c)
			return (s + i);
	}
	return (NULL);
}
```

Actual solution in [2-strchr.c](./2-strchr.c)

## 3. strspn 

A function that gets the length of a prefix substring. 

```
/**
 * _strspn - gets the length of a prefix substring
 * @s: initial segment
 * @accept: substring
 *
 * Return: number of bytes in the initia segment
 */

unsigned int _strspn(char *s, char accept)
{
	unsigned int count;
	int i, j, test;

	count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		test = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				test = 1;
			}
		}

		if (test == 0)
			return (count);
	}

	return (0);
}
```

> The test variable is used to check if we have come to the end of initial segment of 
`s` which consist only of bytes from `accept`.

Actual solution in [3-strspn.c](./3-strspn.c)
