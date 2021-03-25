#include "holberton.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given index
 * @n: pointer to the number
 * @index: position to set the value
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int place = (1 << index);

	if (index > 63)
		return (-1);
	*n = (*n & ~place) | (1 << index);
	return (1);
}
