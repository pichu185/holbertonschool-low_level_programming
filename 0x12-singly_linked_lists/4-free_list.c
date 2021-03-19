#include "lists.h"

/**
 * free_list - frees a list_t list.
 * @head: pointer to the list.
 **/
void free_list(list_t *head)
{
	list_t *nodo_actual;
	list_t *next_node;

	if (head)
	{
		nodo_actual = head;
		next_node = head->next;
		while (next_node)
		{
			free(nodo_actual->str);
			free(nodo_actual);
			nodo_actual = next_node;
			next_node = next_node->next;
		}
		free(nodo_actual->str);
		free(nodo_actual);
	}
}
