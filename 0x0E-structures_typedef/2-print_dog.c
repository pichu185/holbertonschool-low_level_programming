#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - print structure
 * @d: Null
 * Description: print dog structure
 * Return: Always 0
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		exit(1);
	if ((*d).name == NULL)
		(*d).name = "(nil)";
	if ((*d).owner == NULL)
		(*d).owner = "(nil)";
	printf("Name: %s\n", (*d).name);
	printf("Age: %.6f\n", (*d).age);
	printf("Owner: %s\n", (*d).owner);
}
