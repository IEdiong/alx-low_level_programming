#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - number of elements in a linked listint_t list
 * @h: head of the listint_t list
 *
 * Return: Number of nodes in the list.
 */
size_t listint_len(const listint_t *h)
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
