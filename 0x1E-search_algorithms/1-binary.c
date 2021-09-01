#include "search_algos.h"

/**
 * binary_search - function that searches for a value in a sorted array
 * of integers
 * @array: pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: first index where value is located,
 * or -1 if value is not present or array is NULL.
 **/

int binary_search(int *array, size_t size, int value)
{
	size_t j, left, right;

	if (!array)
		return (-1);

	left = 0;
	right = size - 1;
	while (right >= left)
	{
		printf("Searching in array: ");
		for (j = left; j < right; j++)
			printf("%d, ", array[j]);
		printf("%d\n", array[j]);

		j = left + (right - left) / 2;
		if (array[j] < value)
			left = j + 1;
		else if (array[j] > value)
			right = j - 1;
		else
			return (j);
	}
	return (-1);
}
