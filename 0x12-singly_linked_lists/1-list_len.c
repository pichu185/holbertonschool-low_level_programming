#include "lists.h"

/**
 * list_len - returns the number of elements of list_t list
 * @h: pointer to the list
 * Return: number of nodes
 **/
size_t list_len(const list_t *h)
{
	size_t contador = 0;

	while (h)
	{
		h = h->next;
		contador++;
	}

	return (contador);
}
