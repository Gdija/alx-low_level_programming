#include <stdio.h>
/**
 * main - Prints the alphabet
 *
 * Retrun: Always 0
 */
int main(void)
{
	char A;
	A = 'a';

	for (A = 'a'; A <= 'z'; ++A)
	{
	putchar(A);
	}
	putchar('\n');
	return (0);
}
