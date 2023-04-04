#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees up a listint_t list
 * @head: the head of the listint_t list
 */
void free_listint(listint_t *head)
{
	listint_t *prev;

	while (head != NULL)
	{
		prev = head;
		head = head->next;
		free(prev);
	}
}
