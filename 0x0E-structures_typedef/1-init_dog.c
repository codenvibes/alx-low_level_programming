#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Initializes a dog structure.
 *
 * @d: Pointer to the dog structure to be initialized.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The name of the owner.
 *
 * Return: Always 0.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
