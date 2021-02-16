#include "holberton.h"
#include <stdio.h>

/**
 * print_array - check the code for Holberton School students.
 * @a: array
 * @n: amount of numbers to print
 * Return: Always 0.
 */

void print_array(int *a, int n)
{
	int contador = 0;

	while (contador < n)
	{
		printf("%d", a[contador]);
		if (contador < (n - 1))
			printf(", ");
		contador++;
	}
	printf("\n");
}
