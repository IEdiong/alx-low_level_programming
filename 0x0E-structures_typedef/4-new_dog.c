#include <stdlib.h>
#include "dog.h"

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
	int i;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	i = 0;
	while (*(name + i) != '\0')
		i++;

	n = malloc(sizeof(char) * i);
	if (n == NULL)
		return (NULL);
	n = name;

	i = 0;
	while (*(owner + i) != '\0')
		i++;

	o = malloc(sizeof(char) * i);
	if (o == NULL)
		return (NULL);
	o = owner;

	d->name = n;
	d->age = age;
	d->owner = o;

	return (d);
}
