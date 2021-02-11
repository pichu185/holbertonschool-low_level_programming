#include <ctype.h>
#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>

/**
 * _isdigit - Entry point
 * @c: wopa
 *
 * main - check the code for Holberton School students.
 *
 * Return: Always 0 (Success)
 */

int _isdigit(int c)
{
	if ((c >= '0') && (c < '9'))
		return (1);
	else
		return (0);
}
