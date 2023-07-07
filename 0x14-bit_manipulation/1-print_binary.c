#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int num = 1;

	if (n == 0)
		_putchar('0');
	while (num <= n)
	{
	num <<= 1;
	}
	if (num > n)
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

