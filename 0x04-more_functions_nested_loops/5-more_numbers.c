#include "holberton.h"

/**
 * more_numbers - print numbers from 0 to 14
 *
 */

void more_numbers(void)
{
	int i, a, j, b;

	for (i = 0 ; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			b = j % 10;
			if (j >= 10)
			{
				a = j / 10;
				_putchar('0' + a);
			}
			_putchar('0' + b);
		}
		_putchar('\n');
	}
}
