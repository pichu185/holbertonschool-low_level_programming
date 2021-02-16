#include "holberton.h"

/**
 * rev_string - check the code for Holberton School students.
 * @s: abc
 * Return: Always 0.
 */

void rev_string(char *s)

{
	int i;
	int j;
	int g;

	for (i = 0; s[i] != '\0'; i++)
	{
	}

	i = i - 1;
	for (j = 0; j <= i; j++, i--)
	{
		g = s[j];
		s[j] = s[i];
		s[i] = g;
	}
}
