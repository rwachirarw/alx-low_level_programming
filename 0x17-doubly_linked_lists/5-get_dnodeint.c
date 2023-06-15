#include "lists.h"

/**
 * get_dnodeint_at_index - gets the nth node
 * @head: head
 * @index: index
 * Return: the pointer to the nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = NULL;
	unsigned int i = 0;

	temp = head;

	while (temp)
	{
		if (i == index)
			return (temp);
		temp = temp->next;
		i++;
	}

	return (NULL);
}
