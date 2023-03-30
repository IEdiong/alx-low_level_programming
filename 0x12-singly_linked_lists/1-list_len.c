#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - number of elements in a linked list_t list
 * @h: head of the list_t list
 *
 * Return: Number of nodes in the list.
 */
size_t list_len(const list_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
