#include "main.h"
/**
 *  _strspn - gets the length of a prefix substring
 * @s: character
 * @accept: character
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;
	int j = 0;

	while (*s)
	{
	for (; accept[j] ; j++)
	{
	if (*s == accept[j])
	{
	len++;
	break;
	}
	else if (accept[j + 1] == '\0')
	{
	return (len);
	}
	}
	s++;
	}
	return (len);
}
