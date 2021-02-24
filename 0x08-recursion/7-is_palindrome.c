#include "holberton.h"
#include "2-strlen_recursion.c"

/**
 * recursion1 - imprime
 * @s:a
 * @l:b
 * @c:c
 * Return: 1 or 0.
 */

int recursion1(char *s, int l, int c)
{
	if ((*(s + c)) == *(s - c + l - 1) && (c < (l / 2)))
		return (recursion1((s), l, c + 1));
	if (c >= (l / 2))
		return (1);
	return (0);
}

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not.
 * @s: string.
 *
 * Return: 1 or 0.
 */
int is_palindrome(char *s)
{
	int l = _strlen_recursion(s);

	return (recursion1(s, l, 0));
}
