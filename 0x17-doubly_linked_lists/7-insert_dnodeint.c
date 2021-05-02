#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * in a dlistint_t list
 * @h: pointer to the list
 * @idx: position to add the node
 * @n: data for the new node
 * Return: the address of the new node, or NULL if it failed
 **/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *nodo_aux = *h, *nodo_nuevo;
	unsigned int index, contador = 0;

	/* creo nodo */
	nodo_nuevo = malloc(sizeof(dlistint_t));
	if (nodo_nuevo == NULL)
		return (NULL);
	nodo_nuevo->n = n;

	/* caso borde. Si se inserta al principio */
	if (idx == 0)
	{
		nodo_nuevo->prev = NULL;
		nodo_nuevo->next = *h;
		if (*h)
			(*h)->prev = nodo_nuevo;
		*h = nodo_nuevo;
		return (*h);
	}

	/* busco posision para insertar */
	index = idx - 1;
	while (nodo_nuevo && contador != index)
	{
		contador++;
		nodo_aux = nodo_aux->next;
	}

	/* caso general */
	if (contador == index && nodo_aux)
	{
		nodo_nuevo->prev = nodo_aux;
		nodo_nuevo->next = nodo_aux->next;
		if (nodo_aux->next)
			nodo_aux->next->prev = nodo_nuevo;
		nodo_aux->next = nodo_nuevo;
		return (nodo_nuevo);
	}
	free(nodo_nuevo);
	return (NULL);
}
