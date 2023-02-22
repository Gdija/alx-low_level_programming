#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: integer
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	int lastDigit;

	lastDigit = n % 10;

	if (lastDigit < 0)
	{
	lastDigit = -lastDigit;
	}
	_putchar('0' + lastDigit);

	return (lastDigit);
}
