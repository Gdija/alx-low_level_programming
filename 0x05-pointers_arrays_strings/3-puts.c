#include "main.h"
/**
 *_puts - prints a string
 *@str: string
 * Return: void
 */
void _puts(char *str)
{
	int s = 0;

	while (str[s] != '\0')
	{
	s++;
	}
	_putchar('\n');
}
