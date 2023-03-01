#include "main.h"
/**
 * *_strcat - concatenates two strings
 * @src: string
 * @dest: string
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
	i++;
	}
	while (src[j] != '\0')
	{
	src[i] = dest[j];
	i++;
	j++;
	}
	dest[i] = '\0';
	return (dest);
}
