#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node_end - Adds a new node to the end of a linked list.
 *
 * @head: A pointer to the head node of the linked list.
 * @str: The string to be stored in the new node.
 * Return: A pointer to the newly created node.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	size_t len = strlen(str);
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		list_t *last_node = *head;

		while (last_node->next != NULL)
			last_node = last_node->next;
		last_node->next = new_node;
	}

	return (new_node);
}

