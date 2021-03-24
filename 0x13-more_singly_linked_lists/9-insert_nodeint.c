#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the list
 * @idx: position to add the new node
 * @n: data for the new node
 * Return: the address of the new node or NULL if it failed
 **/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *nodo = *head;
	listint_t *new;
	unsigned int index;
	unsigned int contador = 0;

	/* create node */
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	/* border case for insert at the beginning */
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (*head);
	}

	/* search of position to insert */
	index = idx - 1;
	while (nodo && contador != index)
	{
		nodo = nodo->next;
		contador++;
	}

	/* general case */
	if (contador == index && nodo)
	{
		new->next = nodo->next;
		nodo->next = new;
		return (new);
	}

	free(new);
	return (NULL);
}
