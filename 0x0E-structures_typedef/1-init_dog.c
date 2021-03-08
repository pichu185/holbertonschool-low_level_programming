#include "dog.h"

/**
 * init_dog - initialize a variable of type struct
 * @d: dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner
 * Return: Always 0
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->owner = owner;
		d->age = age;
	}
}
