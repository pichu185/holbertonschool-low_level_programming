#include "variadic_functions.h"

/**
 * print_strings - prints strings followed by a new line
 * @n: is the number of strings passed to the function
 * @separator: is the string to be printed between the strings
 * Return: always 0
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *chequeo;
	va_list print_string;

	va_start(print_string, n);
	chequeo = va_arg(print_string, char*);
	for (i = 0; i < n; i++)
	{
		if (chequeo != NULL)
			printf("%s", chequeo);
		else
			printf("(nil)");
		if (separator && i != (n - 1))
		{
			printf("%s", separator);
		}
		chequeo = va_arg(print_string, char*);
	}
	printf("\n");
	va_end(print_string);
}
