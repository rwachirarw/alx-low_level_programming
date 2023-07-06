#include "lists.h"
/**
 * free_dlistint - frees a doubly linked list
 * @head: head of the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = NULL;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
		temp = NULL;
	}
}
