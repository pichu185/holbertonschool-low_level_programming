#include "holberton.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0 if fails
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0;
	int i;

	if (!b)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
		if (b[i] != '0' && b[i] != '1')
			return (0);
	for (number = 0; *b; b++)
	{
		if (*b == '1')
			number = (number << 1) | 1;
		else if (*b == '0')
			number <<= 1;
		else
			break;
	}
	return (number);
}
