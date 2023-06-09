#include "main.h"
/**
 * *_memset - Write a function that fills memory with a constant byte
 * @s: address o memory
 * @b: character
 * @n: integer
 * Return: pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
	s[i] = b;
	n--;
	}
	return (s);
}
