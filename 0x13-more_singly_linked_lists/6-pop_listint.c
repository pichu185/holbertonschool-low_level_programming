#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list and
 * returns the head nodes data (n)
 * @head: pointer to the list
 * Return: head nodes data (n)
 **/
int pop_listint(listint_t **head)
{
	int number;
	listint_t *first_node = *head;

	if (!first_node)
		return (0);

	number = (*head)->n;
	*head = first_node->next;
	free(first_node);
	return (number);
}
