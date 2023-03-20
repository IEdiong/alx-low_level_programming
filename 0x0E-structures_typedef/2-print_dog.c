#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Initializes a variable of type struct dog
 * @d: dog to print out
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf("");
	}
	else
	{
		printf("Name: %s\n", d->name);
		printf("Age: %g\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
