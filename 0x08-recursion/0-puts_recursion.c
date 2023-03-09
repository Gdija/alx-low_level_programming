#include "main.h"

/**
 * _puts_recursion - prints a string
 * @s: string
 * Return: void
 */
void _puts_recursion(char *s)
{
	s++;
	_putchar(*s);
	_putchar('\n');
}
