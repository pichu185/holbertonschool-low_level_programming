#include <ctype.h>
#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>

/**
 * _isdigit - Entry point
 * @c: wopa
 * Return: Always
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 58)
	{
		return (1);
	}
	else
		return (0);
}
