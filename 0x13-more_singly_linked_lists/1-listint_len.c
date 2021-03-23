#include "lists.h"

/**
 * listint_len - returns the number of elements of a listint_t list
 * @h: pointer to the list
 * Return: number of nodes
 **/
size_t listint_len(const listint_t *h)
{
	unsigned int contador = 0;
	const listint_t *nodo = h;

	while (nodo)
	{
		contador = contador + 1;
		nodo = nodo->next;
	}
	return (contador);
}
