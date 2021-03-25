#include "holberton.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: number to be checked
 * @index: is the index, which start from 0 to the bit you want to get
 * Return:  the value of the bit at index. Index will be -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index < 63)
		return ((n >> index) & 1);
	return (-1);
}
