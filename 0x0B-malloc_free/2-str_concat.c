#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s2: string
 * @s1: string
 * Return: nothing
 */
char *str_concat(char *s1, char *s2)
{
	char *t;
	int i = 0, j = 0;

	if (s1 == NULL)
	{
	s1 = "";
	}
	if (s2 == NULL)
	{
	s2 = "";
	}
	i = j = 0;
	while (s1[i] != '\0')
	{
	i++;
	}
	while (s2[j] != '\0')
	{
	j++;
	}
	t = malloc(sizeof(char) * (i + j + 1));
	if (t == NULL)
	{
	return (NULL);
	}
	i = j = 0;
	while (s1[i] != '\0')
	{
	t[i] = s1[i];
	i++;
	}
	while (s2[j] != '\0')
	{
	t[i] = s2[j];
	i++;
	j++;
	}
	t[i] = '\0';
	return (t);
}
