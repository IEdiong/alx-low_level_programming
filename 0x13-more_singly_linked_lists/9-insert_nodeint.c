#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node at a given index
 * @head: a double pointer to the head of the linked list
 * @idx: the index at which the new node is to be inserted
 * @n: the data to be stored in the new node
 *
 * Return: address of the new node. Otherwise NULL,
 *         if it fails.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *prev;
	listint_t *new_node;
	listint_t *dummy_node;
	unsigned int i;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL || *head == NULL)
		return (NULL);

	if (idx == 0)
	{
		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	dummy_node = *head;
	for (i = 0; i != idx; i++)
	{
		prev = *head;
		*head = (*head)->next;
	}

	if (*head == NULL)
	{
		*head = dummy_node;
		return (NULL);
	}
	prev->next = new_node;
	new_node->n = n;
	new_node->next = *head;
	*head = dummy_node;

	return (new_node);
}
