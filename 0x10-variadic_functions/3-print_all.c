#include "variadic_functions.h"

/**
 * print_char - prints a char
 * @list: char to print
 * Return: Always 0
 */
void print_char(va_list list)
{
	printf("%c", va_arg(list, int));
}

/**
 * print_int - print an int
 * @list: int to print
 * Return: Always 0
 */
void print_int(va_list list)
{
	printf("%d", va_arg(list, int));
}

/**
 * print_float - prints a float
 * @list: float to print
 * Return: Always 0
 */
void print_float(va_list list)
{
	printf("%f", va_arg(list, double));
}

/**
 * print_char_2 - print a char
 * @list: char to print
 * Return: Always 0
 */
void print_char_2(va_list list)
{
	char *s_aux;

	s_aux = va_arg(list, char*);
	if (s_aux)
		printf("%s", s_aux);
	else
	{
		printf("(nil)");
		return;
	}
}

/**
 * print_all - prints anything
 * @format: format
 * Return: Always 0
 */
void print_all(const char * const format, ...)
{
	data_t type[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_char_2},
		{NULL, NULL},
	};

	int indx_type, iter = 0;
	va_list list;
	char *separator = "";

	va_start(list, format);

	while (format && format[iter])
	{
		indx_type = 0;
		while (type[indx_type].type)
		{
			if (*type[indx_type].type == format[iter])
			{
				printf("%s", separator);
				type[indx_type].func(list);
				separator = ", ";
			}
			indx_type++;
		}
		iter++;
	}
	printf("\n");
	va_end(list);
}
