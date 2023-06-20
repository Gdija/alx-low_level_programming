#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * init_dog - function that initialize a variable
 * @d: structure
 * @name: character
 * @owner: character
 * @age: number
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
