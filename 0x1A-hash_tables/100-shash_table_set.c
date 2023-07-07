#include "hash_tables.h"

/**
 * shash_table_set - sets a hash table
 * @ht: shash table
 * @key: key
 * @value: value
 * Return: 1 if succeeds, 0 if otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *new_node = NULL;
	shash_node_t *current = NULL;
	shash_node_t *iter = NULL;

	if (!ht || !key || !value)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	current = ht->array[index];
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = strdup(value);
			return (1);
		}
		current = current->next;
	}
	new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;
	new_node->snext = NULL;
	new_node->sprev = NULL;
	if (ht->array[index] == NULL)
		ht->array[index] = new_node;
	else
	{
		current = ht->array[index];
		while (current->next)
			current = current->next;
		current->next = new_node;
	}
	if (ht->shead == NULL)
	{
		ht->shead = new_node;
		ht->stail = new_node;
	}
	else if (strcmp(key, ht->shead->key) < 0)
	{
		new_node->snext = ht->shead;
		ht->shead->sprev = new_node;
		ht->shead = new_node;
	}
	else
	{
		iter = ht->shead;
		while (iter->snext && strcmp(key, iter->snext->key) >= 0)
			iter = iter->snext;
		if (iter == ht->stail)
		{
			iter->snext = new_node;
			new_node->sprev = iter;
			ht->stail = new_node;
		}
		else
		{
			new_node->snext = iter->snext;
			new_node->sprev = iter;
			iter->snext->sprev = new_node;
			iter->snext = new_node;
		}
	}
	
	return (1);
}
