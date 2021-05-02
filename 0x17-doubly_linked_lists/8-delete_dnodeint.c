#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at the index position
 * of a dlistint_t list
 * @head: pointer to the list
 * @index: position of the node to delete
 * Return: 1 if it succeeded, -1 if it failed
 **/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *nodo_aux = *head;
	dlistint_t *nodo_a_elim = *head;
	unsigned int idx;
	unsigned int contador = 0;

	/* Caso borde. Si no hay list */
	if (!(*head))
		return (-1);

	/* Caso borde. Si hay que borrar al principio */
	if (index == 0)
	{
		*head = nodo_a_elim->next;
		free(nodo_a_elim);
		if (*head)
			(*head)->prev = NULL;
		return (1);
	}

	/* Busco posision a borrar */
	idx = index - 1;
	while (nodo_aux && contador != idx)
	{
		contador++;
		nodo_aux = nodo_aux->next;
	}

	/* Caso general */
	if (contador == idx && nodo_aux)
	{
		nodo_a_elim = nodo_aux->next;
		if (nodo_a_elim->next)
			nodo_a_elim->next->prev = nodo_aux;
		nodo_aux->next = nodo_a_elim->next;
		free(nodo_a_elim);
		return (1);
	}

	return (-1);
}
