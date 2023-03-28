#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - Write a function that initialize a variable
 * @d: struct
 * @name: character
 * @age: float
 * @owner: character
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
	d = malloc(sizeof(struct dog));
	}
	d->name = name;
	d->owner = owner;
	d->age = age;
}

