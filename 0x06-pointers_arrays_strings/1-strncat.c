#include "holberton.h"

/**
 * *_strncat - check the code for Holberton School students.
 * @src: abc
 * @dest: def
 * @n: ghi
 * Return: Always 0.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j = 0, cont = 0;
	char *ptr = dest;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (; ((cont < n) && (src[j] != '\0')); i++, j++)
	{
		dest[i] = src[j];
		cont++;
	}
	dest[i + 1] = src[j + 1];
	return (ptr);
}
