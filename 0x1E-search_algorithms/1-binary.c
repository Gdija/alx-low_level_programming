#include "search_algos.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
/**
 *binary_search - searches for a value in the array
 *@array: pointer to the first element
 *@size: size of the array
 *@value: the value to search for
 *Return: return the index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i;
	size_t low = 0;
	size_t high = size - 1;

	while (low <= high)
	{
	printf("Searching in array: ");
	for (i = low; i < high; i++)
	{
	printf("%d, ", array[i]);
	}
	printf("%d\n", array[i]);
	i = ((high + low) / 2);
	if (value == array[i])
	{
	return (i);
	}
	if (value < array[i])
	{
	high = i - 1;
	}
	if (value > array[i])
	{
	low = i + 1;
	}
	}
	return (-1);
}
