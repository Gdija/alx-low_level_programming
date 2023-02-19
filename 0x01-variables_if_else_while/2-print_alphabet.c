#include <stdio.h>
/**
 * main - prints the alphabet
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	char a;

	a = 'a';

	for (a = 'a'; a <= 'z'; ++a)
	{
	putchar(a);
	}
	putchar('\n');
	return (0);
}
