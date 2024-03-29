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
/**
 * dog_t - new name for the type struct dog
 *
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
