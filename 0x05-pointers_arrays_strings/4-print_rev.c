#include "main.h"
/**
 * print_rev -  prints a string in reverse
 * @s: string
 * Return: void
 */
void print_rev(char *s)
{
	int len = 0;
	int f;

	while (*s != '\0')
	{
	len++;
	s++;
	}
	s--;
	for (f = len; f > 0; f--)
	{
	_putchar(*s);
	s--;
	}
	_putchar('\n');
}


