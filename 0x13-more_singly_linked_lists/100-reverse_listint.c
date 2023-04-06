#include <stdlib.h>
#include "lists.h"

/**
 * reverse_listint - reverse a linked list
 * @head: a double pointer to the head node
 *
 * Return: pointer to the new head.
 */
listint_t *reverse_listint(listint_t **head)
{
	/* Create a ptr to point to the previous node (l) */
	/* Create a ptr to point to the next node (r) */
	listint_t *l = NULL;
	listint_t *r;

	/* If there is only one node */
	if ((*head)->next == NULL)
		return (*head);

	/* Loop through the list until the end */
	while (*head != NULL)
	{
		/* Set a ptr to the next node (r) */
		r = (*head)->next;

		/* Set the current node's next to point to prev */
		(*head)->next = l;

		/* Set the prev ptr to point to current */
		l = *head;

		/* Set the current ptr to point to next */
		*head = r;
	}
	/* End loop: Set the current ptr to prev */
	*head = l;

	/* Return the current ptr */
	return (*head);
}
