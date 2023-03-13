#include "main.h"
#include <stdlib.h>
/**
 * *create_array - creates an array of chars
 * @size: integer
 * @c: character
 * Return: nothing
 */
char *create_array(unsigned int size, char c)
{
	char *t;
	unsigned int i;

	if (size == 0)
	{
	return (NULL);
	}
	t = (char *) malloc(size * sizeof(char));
	if (size == 0)
	{
	return (NULL);
	}
	for (i = 0; i < size; i++)
	{
	t[i] = c;
	}
	return (t);
}
