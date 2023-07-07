#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int num = 1;
	int i = 0;

	while (num <= n)
	{
	num <<= 1;
	i++;
	}
	if (i)
	{
	num >>= 1;
	}
	while (num)
	{
	if (n & num)
		_putchar('1');
	else
		_putchar('0');
	num >>= 1;
	}
}

