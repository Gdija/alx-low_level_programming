#include "main.h"
/**
 * *_strncpy - copies two strings
 * @n: integer
 * @dest: string
 * @src: string
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (dest[i] != '\0')
	{
	i++;
	}
	while (i < n && src[i] != '\0')
	{
	dest[i] = src[i];
	i++;
	}
	return (dest);
}
