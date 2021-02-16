#include "holberton.h"
#include <stdio.h>

/**
 * *_strcpy - check the code for Holberton School students.
 * @src: abc
 * @dest: def
 * Return: Always 0.
 */

char *_strcpy(char *dest, char *src)
{
	int contador = 0;

	while (*(src + contador))
	{
		*(dest + contador) = *(src + contador);
		contador++;
	}
	*(dest + contador) = '\0';
	return (dest);
}
