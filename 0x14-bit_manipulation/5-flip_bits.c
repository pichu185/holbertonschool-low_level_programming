#include "holberton.h"

/**
 * flip_bits - function that returns the number of bits you would need to flip
 * @n: number to check
 * @m: number to convert
 * Return: number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int suma = 0;
	unsigned int contador = 0;

	suma = n ^ m;

	while (suma > 0)
	{
		if (suma & 1)
			contador++;
		suma >>= 1;
	}
	return (contador);
}
