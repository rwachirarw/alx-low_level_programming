#include "hash_tables.h"
/**
 * shash_table_delete - A function that deletes a hash table
 * @ht: shash table to be deleted
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned int index = 0;
	shash_node_t *prev_node = NULL;
	shash_node_t *curr_node = NULL;

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
