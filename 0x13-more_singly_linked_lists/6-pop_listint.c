#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t list
 * @head: the addresss of the pointer to the head node
 *
 * Return: head node's data n. Otherwise 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (head == NULL)
		return (0);

	temp = *head;
	*head = (*head)->next;
	n = temp->n;
	free(temp);
	return (n);
}
