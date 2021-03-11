#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers
 * @separator: is the string to be printed between numbers
 * @n:  is the number of integers passed to the function
 * Return: always 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list print_char;

	va_start(print_char, n);
	for (i = 0; i < n; i++)
	{
		if (separator && i != (n - 1))
		{
			printf("%i%s", va_arg(print_char, int), separator);
		}
		else
		{
			printf("%i", va_arg(print_char, int));
		}
	}
	printf("\n");
	va_end(print_char);
}
