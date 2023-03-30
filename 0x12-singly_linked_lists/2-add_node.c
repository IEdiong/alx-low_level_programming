#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node to the beginning of a list_t list
 * @head: head of the list_t list
 * @str: string to be duplicated
 *
 * Return: address of the new element.
 */
list_t *add_node(list_t **head, const char *str)
{
	/* create a new node */
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	/* duplicate the string into the node->str */
	new_node->str = strdup(str);

	/* add the length of the string to node->len */
	new_node->len = strlen(str);

	/* set it's next to head node->next */
	new_node->next = *head;

	/* set head to point to the new node */
	*head = new_node;

	/* return head (the new node) */
	return (*head);
}
