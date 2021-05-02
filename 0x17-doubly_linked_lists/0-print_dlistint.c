#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: pointer to the list
 * Return: the number of nodes
 **/
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *nodo = h;
	size_t contador = 0;

	while (nodo)
	{
		printf("%d\n", nodo->n);
		contador++;
		nodo = nodo->next;
	}

	return (contador);
}
