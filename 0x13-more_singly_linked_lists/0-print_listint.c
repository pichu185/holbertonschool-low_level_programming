#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to the list
 * Return: number of nodes
 **/
size_t print_listint(const listint_t *h)
{
	unsigned int contador = 0;
	const listint_t *nodo = h;

	while (nodo->next != NULL)
	{
		nodo = nodo->next;
		printf("%d\n", nodo->n);
		contador = contador + 1;
	}
	return (contador);
}
