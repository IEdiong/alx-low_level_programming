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
	listint_t *curr_node;
	listint_t *new_node;
	unsigned int i;

	curr_node = *head;
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL || curr_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	for (i = 0; (curr_node != NULL) && (i < idx); i++)
	{
		if (i == idx - 1)
		{
			new_node->next = curr_node->next;
			curr_node->next = new_node;
			return (new_node);
		}
		else
			curr_node = curr_node->next;
	}
	return (NULL);
}
