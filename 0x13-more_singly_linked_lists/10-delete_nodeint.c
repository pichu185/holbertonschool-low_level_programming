#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a listint_t list
 * @head: pointer to the list
 * @index: position of the node to delete
 * Return: 1 if it succeeded or -1 if it failed
 **/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *nodo = *head;
	listint_t *node_to_delete = *head;
	unsigned int idx;
	unsigned int contador = 0;

	/* border case for empty list */
	if (!(*head))
		return (-1);

	/* border case for delete at the beginning */
	if (index == 0)
	{
		*head = node_to_delete->next;
		free(node_to_delete);
		return (1);
	}

	/* search of position to delete */
	idx = index - 1;
	while (nodo && contador != idx)
	{
	        nodo = nodo->next;
		contador++;
	}

	/* general case */
	if (contador == idx && nodo)
	{
		node_to_delete = nodo->next;
		nodo->next = node_to_delete->next;
		free(node_to_delete);
		return (1);
	}

	return (-1);
}
