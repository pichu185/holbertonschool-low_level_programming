#include "holberton.h"

/**
 * _strcmp - check the code for Holberton School students.
 * @s1: abc
 * @s2: def
 * Return: Always 0.
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while ((s1[i] != '\0' && s2[i] != '\0') && (s1[i] == s2[i]))
		i++;
	return (s1[i] - s2[i]);
}
