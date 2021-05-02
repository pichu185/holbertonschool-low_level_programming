#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: pointer to the first element of the list
 * @n: int to set the new node
 * Return: the address of the new element, or NULL if it failed
 **/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *end, *temp = *head;

	end = malloc(sizeof(dlistint_t));
	if (end == NULL)
		return (NULL);
	end->n = n;
	end->next = NULL;

	if (temp)
	{
		while (temp->next)
			temp = temp->next;
		end->prev = temp;
		temp->next = end;
	}
	else
	{
		*head = end;
		end->prev = NULL;
	}

	return (end);
}
