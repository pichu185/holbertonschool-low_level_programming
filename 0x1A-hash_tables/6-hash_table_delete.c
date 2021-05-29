#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table
 * @ht: pointer to the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
    hash_node_t *temporal_node, *temporal_next_node;
    unsigned long int i;

    if (!ht)
        return;
    else
    {
        for (i = 0; i < ht->size; i++)
        {
            if (ht->array[i])
            {
                temporal_node = ht->array[i];
                temporal_next_node = ht->array[i]->next;
                while (temporal_next_node)
                {
                        free(temporal_node->key);
                        free(temporal_node->value);
                        free(temporal_node);
                        temporal_node = temporal_next_node;
                        temporal_next_node = temporal_next_node->next;
                }
                free(temporal_node->key);
                free(temporal_node->value);
                free(temporal_node);
            }
        }
        free(ht->array);
        free(ht);
    }
}
