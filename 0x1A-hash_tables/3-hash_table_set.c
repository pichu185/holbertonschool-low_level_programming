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
    hash_node_t *element_node, *aux;
    unsigned long int index;

    if (!ht || !key || ! value || *key == "\0")
        return (0);

    /* getting the index of the key with previous function*/
    index = key_index((const unsigned char *)key, ht->size);

    /* creating pointer to head of the array */
    aux = ht->array[index];

    while (aux)
    {
        /*checking if the key matches the key in the node*/
        if (strcmp(key, aux->key) == 0)
        {
            free(aux->value);
            aux->value = strdup(value);
            return(1);
        }
        else
            aux = aux->next;
    }
    /* if key was not found, we create a new node */
    element_node = malloc(sizeof(hash_node_t));
    if (!element_node)
        return(0);
    
    element_node->key = strdup(key);
    element_node->value = strdup(value);
    
    element_node->next = ht->array[index];
    ht->array[index] = element_node;
    return(1);
}   
