#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Frees a linked list and all its nodes.
 *
 * @head: pointer to the head node of the linked list.
 */

void free_list(list_t *head)
{
	while (head != NULL)
	{
		list_t *temp = head;

		head = head->next;
		free(temp->str);
		free(temp);
	}
}

