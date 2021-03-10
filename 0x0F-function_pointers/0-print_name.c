#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - Write a function that prints a name
 * @name: name of a person
 * @f: function
 * Description: abc
 * Return: name
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
