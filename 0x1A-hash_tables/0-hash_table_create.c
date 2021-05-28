#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table
 * @size:  is the size of the array
 * Return: a pointer to the newly created hash table
 * If something went wrong, it should return NULL
 **/
hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *new_table = NULL;
    unsigned long int i = 0;

    new_table = malloc(sizeof(hash_node_t));
    if (!new_table) 
        return (NULL);

    new_table->size = size;
    new_table->array = malloc(sizeof(hash_node_t **) * size);
    if (!new_table->array)
        {
            free(new_table);
            return (NULL); 
        }
    for (i = 0; i < size; i++)
        (new_table->array[i] = 0);
    return (new_table);
}
