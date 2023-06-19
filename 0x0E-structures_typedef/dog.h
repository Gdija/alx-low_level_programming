#ifndef DOG_H
#define DOG_H
/**
 * struct dog - new type of structure
 * @name: character
 * @owner: character
 * @age: number
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
