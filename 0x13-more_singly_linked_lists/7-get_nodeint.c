#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t list
 * @head: pointer to the head node
 * @index: the index of the node starting at 0
 *
 * Return: a node of listint_t. Otherwise NULL, if the node does not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *curr_node;

	curr_node = head;
	for (i = 0; i != index; i++)
	{
		if (curr_node == NULL)
			return (NULL);
		curr_node = curr_node->next;
	}

	return (curr_node);
}
