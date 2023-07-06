#include "hash_tables.h"
/**
 * hash_table_delete - A function that deletes a hash table
 * @ht: hash table to be deleted
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int index = 0;
	hash_node_t *prev_node = NULL;
	hash_node_t *curr_node = NULL;

	while (index < ht->size)
	{
		curr_node = ht->array[index];
		prev_node = ht->array[index];
		while (prev_node != NULL)
		{
			curr_node = curr_node->next;
			free(prev_node->key);
			if (prev_node->value != NULL)
				free(prev_node->value);
			free(prev_node);
			prev_node = curr_node;
		}
		index++;
	}
	free(ht->array);
	free(ht);
}
