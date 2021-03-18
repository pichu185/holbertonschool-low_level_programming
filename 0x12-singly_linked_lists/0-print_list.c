#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the list
 * Return: number of nodes
 **/
size_t print_list(const list_t *h)
{
	size_t contador = 0;

	while (h)
	{
		if (h->str)
			printf("[%u] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		contador++;
		h = h->next;
	}

	return (contador);
}
