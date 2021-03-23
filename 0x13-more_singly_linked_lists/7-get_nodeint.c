#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to the list
 * @index: nth node
 * Return: nth node. If the node doesn't exist, returns NULL
 **/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int contador = 0;
	listint_t *nodo = head;

	while (nodo)
	{
		if (contador == index)
			return (nodo);
		contador = contador + 1;
		nodo = nodo->next;
	}
	return (0);
}
