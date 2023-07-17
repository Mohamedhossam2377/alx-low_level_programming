#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 *
 * @d: the dog struct
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: name of the dog's owner
 *
 * Return: void
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
