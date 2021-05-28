#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: hash table
 * @key: key. Cannot be an empty string
 * @value: value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 **/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_element_node, *temporal_node;
	unsigned long int index;

	if (!ht || !key || !value || *key == '\0')
		return (0);

	/* getting the index of the key with previous function*/
	index = key_index((const unsigned char *)key, ht->size);

	/* creating pointer to head of the array */
	temporal_node = ht->array[index];

	while (temporal_node)
	{
		/*checking if the key matches the key in the node*/
		if (strcmp(key, temporal_node->key) == 0)
		{
			free(temporal_node->value);
			temporal_node->value = strdup(value);
			return (1);
		}
		else
			temporal_node = temporal_node->next;
	}
	/* if key was not found, we create a new node */
	new_element_node = malloc(sizeof(hash_node_t));
	if (!new_element_node)
		return (0);

	new_element_node->key = strdup(key);
	new_element_node->value = strdup(value);

	new_element_node->next = ht->array[index];
	ht->array[index] = new_element_node;
	return (1);
}
