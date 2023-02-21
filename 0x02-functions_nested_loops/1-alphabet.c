#include "main.h"
/**
 * print the alphabet - the alphabet in lowercase
 *Return: void
 */
void print_alphabet(void)
{
	char a;

	a = 'a';

	for (a = 'a'; a <= 'z'; ++a)
	{
	_putchar(a);
	}
	_putchar('\n');
}
