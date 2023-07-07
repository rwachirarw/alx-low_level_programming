#include "hash_tables.h"
/**
 * shash_table_print - a function that prints a hash table
 * @ht: hash table
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *iter = NULL;
	int flagged = 1;

	if (ht == NULL)
		return;
	printf("{");
	iter = ht->shead;
	while (iter != NULL)
	{
		if (flagged)
		{
			printf("\'%s\': \'%s\'", iter->key, iter->value);
			flagged = 0;
		}
		else
			printf(", \'%s\': \'%s\'", iter->key, iter->value);
		iter = iter->snext;
	}
	printf("}\n");
}
