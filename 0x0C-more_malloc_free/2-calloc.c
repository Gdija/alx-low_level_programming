#include "main.h"
#include <stdlib.h>
/**
 * _calloc - function that allocates memory for an array
 * @size: number
 * @nmemb: number
 * Return: nothing
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0, j = 0;
	char *t;

	if (nmemb == 0 || size == 0)
	{
	return (NULL);
	}
	i = nmemb * size;
	t = malloc(i);

	if (t == NULL)
	{
	return (NULL);
	}
	while (j < i)
	{
	t[j] = 0;
	j++;
	}
	return (t);
}
