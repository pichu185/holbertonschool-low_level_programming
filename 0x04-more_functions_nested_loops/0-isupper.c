#include <ctype.h>
#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>

/**
 * _isupper - Entry point
 * @c: wopa
 *
 * main - check the code for Holberton School students.
 *
 * Return: Always 0 (Success)
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
