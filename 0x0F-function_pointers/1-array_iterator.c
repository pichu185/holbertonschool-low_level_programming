#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - Write a function that executes a function given as a
 * parameter on each element of an array.
 * @array: Array
 * @size: Size of the array
 * @action: is a pointer to the function you need to use
 * Return: Always 0
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && size && action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
