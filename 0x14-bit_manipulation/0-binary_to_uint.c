#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: string of 0 and 1 chars
 * Return: 0 if b is null or one of the char isn't 1 or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int num = 0;

	if (b == NULL)
	{
	return (0);
	}
	while (b[i])
	{
	if (b[i] != '0' && b[i] != '1')
	{
	return (0);
	}
	num <<= 1;
	num += b[i] - 48;
	i++;
	}
	return (num);
}
