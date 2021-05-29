#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table
 * @ht: pointer to the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temporal_node;
	unsigned long int i;
	int coma = 0;

	if (!ht)
		return;

	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
		/* in each index of the array we set the pointer to the head */
			temporal_node = ht->array[i];
			while (temporal_node)
			{
				if (!temporal_node->key)
					continue;
				/* printing ', ' on each value after the first one */
				if (coma == 1)
					printf(", ");

				/* print the key followed by the value */
				printf("'%s': '%s'", temporal_node->key, temporal_node->value);

				temporal_node = temporal_node->next;
			}
			coma = 1;
		}
	}
	printf("}\n");
}
