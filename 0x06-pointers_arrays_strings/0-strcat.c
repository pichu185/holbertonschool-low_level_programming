#include "holberton.h"

/**
 * *_strcat - check the code for Holberton School students.
 * @src: abc
 * @dest: def
 * Return: Always 0.
 */

char *_strcat(char *dest, char *src)
{
	int i, j = 0;
	char *ptr = dest;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (; src[j] != '\0'; i++, j++)
		dest[i] = src[j];
	dest[i + 1] = src[j + 1];
	return (ptr);
}
