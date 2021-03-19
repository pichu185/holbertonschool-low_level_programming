#include "lists.h"

/**
 * _strlen - counts the length of a strings
 * @s: string
 * Description: counts the characters of the string
 * Return: Count
 */

unsigned int _strlen(const char *s)
{
	int count = 0;

	if (s == NULL)
		return (0);
	while (*(s + count))
	{
		count++;
	}
	return (count);
}

/**
 * add_node_end - function that adds a new node at the end of a list
 * @head: pointer to the first element of the list
 * @str: string to set in the new node
 * Return: the address of the new elemnt created or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *end, *temp;

	if (!head)
		return (0);
	temp = *head;
	end = malloc(sizeof(list_t));
	if (end == NULL)
	{
		return (NULL);
	}
	end->str = strdup(str);
	end->len = _strlen(str);
	end->next = NULL;
	if (*head == NULL)
	{
		*head = end;
		return (end);
	}
	while (temp->next)
		temp = temp->next;
	temp->next = end;
	return (end);
}
