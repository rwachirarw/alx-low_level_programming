#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node - Adds a new node to the beginning of a linked list
 * @head: A pointer to the head node of the linked list
 * @str: The string to be stored in the new node
 * @Return: A pointer to the newly created node, or
 * NULL if memory allocation failed.
 */

list_t *add_node(list_t **head, const char *str)
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
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}

