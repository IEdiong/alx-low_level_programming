#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - returns the sum all data n of a listint_t list
 * @head: pointer to the head node
 *
 * Return: sum of all data (n) of listint_t.
 * Otherwise 0, if the linked list is empty.
 */
int sum_listint(listint_t *head)
{
	int sum;
	listint_t *curr_node;

	sum = 0;
	curr_node = head;
	if (head == NULL)
		return (sum);

	while (curr_node)
	{
		sum += curr_node->n;
		curr_node = curr_node->next;
	}

	return (sum);
}
