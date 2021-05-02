#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) of a dlistint_t list
 * @head: pointer to the list
 * Return: the sum of all lists data and 0 if the list is empty
 **/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *nodo = head;
	int suma = 0;

	while (nodo)
	{
		suma += nodo->n;
		nodo = nodo->next;
	}

	return (suma);
}
