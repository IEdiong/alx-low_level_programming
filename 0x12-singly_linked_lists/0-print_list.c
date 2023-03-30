#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - printst all the elements of a list_t list
 * @h: head of the list_t list
 *
 * Return: Number of elements in the list.
 */
size_t print_list(const list_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		count++;
		h = h->next;
	}

	return (count);
}
