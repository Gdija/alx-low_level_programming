#include "main.h"
/**
 * *_strncat - concatenates two strings
 * @n: integer
 * @dest: string
 * @src: string
 * @n : integer
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
	i++;
	}
	while (j < n && src[j] != '\0')
	{
	dest[i] = src[j];
	j++;
	i++;
	}
	return (dest);
}
