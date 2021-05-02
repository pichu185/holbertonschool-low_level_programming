#include "lists.h"

/**
 * dlistint_len - returns the number of elements of a linked dlistint_t list
 * @h: pointer to the list
 * Return: the number of nodes
 **/
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *nodo = h;
	size_t contador = 0;

	while (nodo)
	{
		contador++;
		nodo = nodo->next;
	}

	return (contador);
}
