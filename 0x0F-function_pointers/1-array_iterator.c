#include "function_pointers.h"

/**
 * array_iterator - function that executes a function
 * @array: array
 * @size: size of the array
 * @action: pointer to the function
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int t = 0;

	if (array != NULL && action != NULL && size > 0)
	{
	while (t < size)
	{
	action(array[t]);
	t++;
	}
	}
}
