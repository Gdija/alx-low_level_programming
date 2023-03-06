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
	int i = 0;
	int j = 0;

	for (; s[i] != '\0'; i++)
	{
	for (; accept[j] != '\0'; j++)
	{
	if (accept[j] == s[i])
	{
	len++;
	break;
	}
	else if (accept[j + 1] == '\0')
	{
	return (len);
	}
	}
	}
	return (len);
}
