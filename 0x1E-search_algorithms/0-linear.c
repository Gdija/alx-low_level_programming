#include "search_algos.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * linear_search - searches for a value in the array
 * @array: pointer to the first element
 * @size: size of the array
 * @value: the value to search for
 * Return: return the first index where value is located
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
	printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	if (array[i] == value)
	{
	return (i);
	}
	}
	return (-1);
}
