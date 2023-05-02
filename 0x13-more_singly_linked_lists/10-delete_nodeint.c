#include "lists.h"

/**
  * delete_nodeint_at_index - deletes the node at index index of a listint_t linked list
  * @head: pointer to head pointer
  * @index: node that should be deleted
  * Return: 1 if it succeeded, -1 if it failed
  */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head, *prev_node;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}

	prev_node = NULL;
	while (i < index && temp != NULL)
	{
		prev_node = temp;
		temp = temp->next;
		i++;
	}

	if (temp == NULL)
		return (-1);

	prev_node->next = temp->next;
	free(temp);
	return (1);
}

