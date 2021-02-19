#include "holberton.h"

/**
 * _strcmp - check the code for Holberton School students.
 * @s1: abc
 * @s2: def
 * Return: Always 0.
 */

int _strcmp(char *s1, char *s2)
{
	int count = 0;

	while ((s1[count] && s2[count]) && (s1[count] == s2[count]))
		count++;
	return (s1[count] - s2[count]);
}
