#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at a given index
 * @head: a double pointer to the head of the linked list
 * @index: the index at which the new node is to be inserted
 *
 * Return: address of the new node. Otherwise NULL,
 *         if it fails.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *curr_node;
	listint_t *prev;
	unsigned int i;

	curr_node = NULL;
	prev = *head;
	if (!head)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(curr_node);
		return (1);
	}

	i = 0;
	while (i < index - 1)
	{
		if (prev == NULL || prev->next == NULL)
		{
			return (-1);
		}
		prev = prev->next;
		i++;
	}

	curr_node = prev->next;
	prev->next = curr_node->next;
	free(curr_node);
	return (1);
}
