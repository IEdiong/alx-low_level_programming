#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node to the end of a list_t list
 * @head: head of the list_t list
 * @str: string to be duplicated
 *
 * Return: address of the new element.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	/* create the new_node */
	list_t *new_node;
	list_t *tail;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	/* duplicate the string into the str (new_node->str) */
	new_node->str = strdup(str);

	/* put the length of the string in the len (new_node->len) */
	new_node->len = strlen(str);

	/* put the NULL in next (new_node->next = NULL) */
	new_node->next = NULL;

	/**
	 * if head is NULL then make the new_node the head
	 * else loop through the list_t list until we
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
