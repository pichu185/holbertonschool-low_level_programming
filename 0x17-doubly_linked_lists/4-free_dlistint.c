#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: pointer to the list
 **/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *actual_nodo;
	dlistint_t *next_nodo;

	if (head)
	{
		actual_nodo = head;
		next_nodo = head->next;
		while (next_nodo)
		{
			free(actual_nodo);
			actual_nodo = next_nodo;
			next_nodo = next_nodo->next;
		}
		free(actual_nodo);
	}
}
