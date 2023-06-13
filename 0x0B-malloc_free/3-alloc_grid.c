#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: integer
 *@height: integer
 * Return: nothing
 */
int **alloc_grid(int width, int height)
{
	int **t;
	int x, y;

	if (width <= 0 || height <= 0)
	{
	return (NULL);
	}
	t = malloc(sizeof(int *) * height);
	if (t == NULL)
	{
	return (NULL);
	}
	for (y = 0; y < height; y++)
	{
	t[y] = malloc(sizeof(int) * width);
	if (t[y] == NULL)
	{
	for (; y >= 0; y--)
	{
	free(t[y]);
	}
	free(t);
	return (NULL);
	}
	}
	for (y = 0; y < height; y++)
	{
	for (x = 0; x < width; x++)
	{
	t[y][x] = 0;
	}
	}
	return (t);
}

