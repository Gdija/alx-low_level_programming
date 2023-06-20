#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
int _strlen(char *str);
char *_strcpy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);
/**
 * _strlen - the length of string
 * @str: string
 * Return: the length of the string
 */
int _strlen(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
	len++;
	}
	return (len);
}
/**
 * *_strcpy - copies a string
 * @dest: string
 * @src: string
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i, len = 0;

	while (src[len] != '\0')
	{
	len++;
	}
	for (i = 0; i < len; i++)
	{
	dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
/**
 * *new_dog - function that creates a new dog
 * @name: string
 * @age: number
 * @owner: string
 * Return: the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
	return (NULL);
	}
	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (dog->name == NULL)
	{
	free(dog);
	return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (dog->owner == NULL)
	{
	free(dog);
	free(dog->name);
	return (NULL);
	}
	dog->name = _strcpy(dog->name, name);
	dog->owner = _strcpy(dog->owner, owner);
	dog->age = age;
	return (dog);
}

