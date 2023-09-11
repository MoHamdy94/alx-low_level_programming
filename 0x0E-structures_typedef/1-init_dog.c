#include "dog.h"

/**
 * init_dog - initialize a dog
 * @d: dog to initialize
 * @name: name of dog
 * @age: age of dog
 * @owner: owner name
 *
 * Return: woid
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
