#include "main.h"
/**
 * puts2 - prints every other character of a string
 * @str:string
 * Return: void
 */
void puts2(char *str)
{
	int a = 0;
	int b;

	while (str[a] != '\0')
	{
	a++;
	}
	for (b = 0; b < a; b++)
	{
	if (b % 2 == 0)
	{
	_putchar(str[b]);
	}
	}
	_putchar('\n');
}
