#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free up memory allocated to dog
 * @d: address of dog in memory
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->age);
		free(d->owner);
		free(d);
	}
}
