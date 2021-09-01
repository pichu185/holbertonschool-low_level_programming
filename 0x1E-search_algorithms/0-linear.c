#include "search_algos.h"

/**
 * linear_search - function that searches for a value in an array of integers
 * @array: pointer to the first element of the array to search in
 * @size:  is the number of elements in array
 * @value: is the value to search for
 * Return: the first index where value is located or -1 if Null or not in a
 */

int linear_search(int *array, size_t size, int value)
{
	size_t j;

	if (!array)
		return (-1);

	for (j = 0; j < size; j++)
	{
		printf("Value checked array[%ld] = [%d]\n", j, array[j]);
		if (array[j] == value)
			return (j);
	}
	return (-1);
}
