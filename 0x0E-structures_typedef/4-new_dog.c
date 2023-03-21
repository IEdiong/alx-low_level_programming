#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 *
 * Return: length of the string
 */

int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}


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


/**
 * new_dog - Creates a new dog
 * @name: name of the new dog
 * @age: age of the new dog
 * @owner: owner of the new dog
 *
 * Return: pointer to the newly created dog.
 * Otherwise NULL if function fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	char *n, *o;
	int size;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	size = _strlen(name);
	n = malloc(sizeof(char) * size);
	if (n == NULL)
	{
		free(d);
		return (NULL);
	}
	_strcpy(n, name);

	size = _strlen(owner);
	o = malloc(sizeof(char) * size);
	if (o == NULL)
	{
		free(d);
		return (NULL);
	}
	_strcpy(o, owner);

	d->name = n;
	d->age = age;
	d->owner = o;

	return (d);
}
