#include "dog.h"

/**
 * init_dog - initialises struct dog variable
 * @d: pointer to the variable struct dog
 * @name: pointer to dogs name
 * @age: age of dog
 * @owner: pointer to dogs owner
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}

}
