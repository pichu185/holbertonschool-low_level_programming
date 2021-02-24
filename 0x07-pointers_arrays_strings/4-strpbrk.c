#include "holberton.h"

/**
 *  _strpbrk - check the code for Holberton School students.
 * @accept: abc
 * @s: def
 * Return: Always 0
 */

char *_strpbrk(char *s, char *accept)
{
	int pos1 = 0, pos2 = 0;

	while (s[pos1])
	{
		pos2 = 0;
		while (accept[pos2])
		{
			if (s[pos1] == accept[pos2])
				break;
			pos2++;
		}
		if (accept[pos2])
			return (s + pos1);
		pos1++;
	}
	return (0);
}
