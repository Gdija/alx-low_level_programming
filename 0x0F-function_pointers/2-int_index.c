#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: array
 * @size: integer
 * @cmp:pointer to func
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
	{
	return (-1);
	}
	if (array != NULL && cmp != NULL && size > 0)
	{
	while (i < size)
	{
	if (cmp(array[i]))
	{
	return (i);
	}
	i++;
	}
	}
	return (-1);
}
