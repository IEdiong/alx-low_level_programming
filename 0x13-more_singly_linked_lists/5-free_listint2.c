#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees up a listint_t list
 * @head: a double pointer to the head of the listint_t list
 */
void free_listint2(listint_t **head)
{
	listint_t *prev;

	if (*head == NULL)
		return;

	while (*head != NULL)
	{
		prev = *head;
		*head = (*head)->next;
		free(prev);
	}
	*head = NULL;
}
