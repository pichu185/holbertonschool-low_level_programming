#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t list
 * @head: pointer to the list
 * Return: sum of all data in the list. If the list is empty, return 0
 **/
int sum_listint(listint_t *head)
{
	listint_t *nodo = head;
	int suma = 0;

	while (nodo)
	{
		suma = suma + nodo->n;
		nodo = nodo->next;
	}

	return (suma);
}
