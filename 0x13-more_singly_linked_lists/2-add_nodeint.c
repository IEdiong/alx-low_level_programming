#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_nodeint - adds a new node to the beginning of a listint_t list
 * @head: head of the listint_t list
 * @n: the number to be stored
 *
 * Return: address of the new element.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	/* create a new node */
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	/* add the number node->n */
	new_node->n = n;

	/* set it's next to head node->next */
	new_node->next = *head;

	/* set head to point to the new node */
	*head = new_node;

	/* return head (the new node) */
	return (*head);
}
