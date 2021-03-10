#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Write a function that prints a name
 * @name: name of a person
 * @f: function
 * Return: name
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
