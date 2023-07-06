#include "hash_tables.h"
/**
 * hash_table_print - a function that prints a hash table
 * @ht: hash table
*/
void hash_table_print(const hash_table_t *ht)
{
    unsigned long int index = 0;
    hash_node_t *iter = NULL;
    int flagged = 1;

    if (ht == NULL)
        return;
    printf("{");
    while (index < ht->size)
    {
        iter = ht->array[index];
        while (iter != NULL)
        {
            if (flagged)
            {
                printf("\'%s\': \'%s\'", iter->key, iter->value);
                flagged = 0;
            }
            else
                printf(", \'%s\': \'%s\'", iter->key, iter->value);
            iter = iter->next;
        }
        index++;
    }
    printf("}\n");
}