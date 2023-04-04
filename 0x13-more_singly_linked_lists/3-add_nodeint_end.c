#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node to the end of a listint_t list
 * @head: head of the listint_t list
 * @n: number to add
 *
 * Return: address of the new element.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	/* create the new_node */
	listint_t *new_node;
	listint_t *tail;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	/* put the number in n (new_node->n) */
	new_node->n = n;

	/* put the NULL in next (new_node->next = NULL) */
	new_node->next = NULL;

	/**
	 * if head is NULL then make the new_node the head
	 * else loop through the listint_t list until we
	 * find the tail; tail->next that points to NULL
	 */
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		tail = *head;
		while (tail->next != NULL)
			tail = tail->next;
		tail->next = new_node;
	}

	/* return head */
	return (*head);
}
