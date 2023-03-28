#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Define a new type
 * @name: character
 * @owner: character
 * @age: float
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
