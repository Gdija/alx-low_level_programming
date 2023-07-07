#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer
 * @index: index of the bit
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
	{
	return (-1);
	}
	*n = *n & ~ (1UL << index);
	return (1);
}
