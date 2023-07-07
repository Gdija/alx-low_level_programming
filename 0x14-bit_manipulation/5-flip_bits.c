#include "main.h"

/**
 * flip_bits - the number of bits you would need to flip
 * @n: number
 * @m: number
 * Return: number o bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int num = n ^ m;
	int count = 0;

	while (num)
	{
	count += num & 1;
	num >>= 1;
	}
	return (count);
}
