#include "holberton.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <ctype.h>

/**
 * _isalpha - Entry point
 * @c: wooopa
 *
 * Description: Show a message blablabla
 *
 * Return: Always 0 (Success)
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
