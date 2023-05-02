#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

#define MAX_NODES 1000

/**
 * struct node_info_s - Holds information about a node in a linked list.
 * @address: The address of the node in memory.
 * @value: The value stored in the node.
 */
typedef struct node_info_s
{
	const void *address;
	int value;
} node_info_t;

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: A pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	node_info_t node_info[MAX_NODES] = {0};
	size_t count = 0;

	while (head != NULL)
	{
		const void *address = (const void *)head;
		int value = head->n;
		bool is_duplicate = false;

		for (size_t i = 0; i < count; i++)
		{
			if (node_info[i].address == address)
			{
				is_duplicate = true;
				printf("-> [%p] %d\n", address, value);
				break;
			}
		}

		if (!is_duplicate)
		{
			node_info[count].address = address;
			node_info[count].value = value;
			printf("[%p] %d\n", address, value);
			count++;

			if (count >= MAX_NODES)
			{
				fprintf(stderr, "Error: List is too long.\n");
				exit(98);
			}
		}

		head = head->next;
	}

	return (count);
}

