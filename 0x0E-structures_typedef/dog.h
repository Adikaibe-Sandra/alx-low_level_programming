#ifndef DOG_H
#define DOG_H
#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Initializes a variable of type dog structure
 * @d: array
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: Owner
 * Description: This Structure is for a Dog
 *
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

#endif
