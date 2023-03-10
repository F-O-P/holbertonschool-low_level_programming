#include "dog.h"

/**
 * init_dog - change dog info
 * @d: pointer to struct dog
 * @name: name of dog
 * @age: age of dog
 * @owner: name of dogs owner
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));

		if (d == NULL)
		{
			return;
		}
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
