#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: number
 * @max: number
 * Return: nothing
 */
int *array_range(int min, int max)
{
	int *t, a = 0;

	if (min > max)
	{
	return (NULL);
	}
	t = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (t == NULL)
	{
	return (NULL);
	}
	while (min <= max)
	{
		t[a] = min;
		a++;
		min++;
	}
	return (t);
}
