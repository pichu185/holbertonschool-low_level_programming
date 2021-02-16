#include "holberton.h"

/**
 * puts2 - check the code for Holberton School students.
 * @str: abc
 * Return: Always 0.
 */

void puts2(char *str)
{
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
	}
	for (j = 0; j < i; j += 2)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
