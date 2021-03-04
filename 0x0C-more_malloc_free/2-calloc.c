#include "holberton.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc.
 * the memory is set to zero.
 * @nmemb: number of elements.
 * @size: size in bytes.
 * Return: pointer to the allocated memory.
 **/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int pos;

	if (nmemb == 0 || size == 0)
		return (NULL);
	arr = malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);
	for (pos = 0; pos < (nmemb * size); pos++)
		arr[pos] = 0;
	return (arr);
}
