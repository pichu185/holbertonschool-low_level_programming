#include "hash_tables.h"

/**
  * hash_table_get - function that retrieves a value associated with a key
  * @ht: pointer to hash table
  * @key: key
  * Return: value associated to the key, or NULL if key couldn’t be found
  */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *temporal_node;
	unsigned long int index;

	if (!ht || !key || *key == '\0')
		return (NULL);

	/* getting the index of the key with previous functions*/
	index = key_index((const unsigned char *)key, ht->size);

	/* I create a pointer to the head of the array*/
	temporal_node = ht->array[index];

	while (temporal_node)
	{
		/*I check if the key matches with the key in the node*/
		if (strcmp(key, temporal_node->key) == 0)
		{
			return (temporal_node->value);
		}
		else
			temporal_node = temporal_node->next;
	}
	/* if the key was not found, return NULL */
	return (NULL);
}
