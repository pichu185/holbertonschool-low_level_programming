#include "holberton.h"
#include <stdio.h>

/**
 *  print_diagsums - check the code for Holberton School students.
 * @a: abc
 * @size: def
 * Return: Always 0
 */

void print_diagsums(int *a, int size)
{
	int diag1 = 0, diag2 = 0, x, y, aux, aux2;

	for (y = 0; y < size; y++)
	{
		aux = (y * size) + y;
		diag1 += *(a + aux);
	}
	for (x = 0; x < size; x++)
	{
		aux2 = (x * size) + size - 1 - x;
		diag2 += *(a + aux2);
	}
	printf("%d, %d", diag1, diag2);
	printf("\n");
}
