#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer
 * @str: character
 * Return: nothing
 */
char *_strdup(char *str)
{
	char *t;
	int i = 0;
	int len = 0;

	if (str == 0)
	{
	return (NULL);
	}
	while (str[len] != '\0')
	{
	len++;
	}
	t = malloc(sizeof(char) * (len + 1));
	if (t == 0)
	{
	return (NULL);
	}
	while (str[i])
	{
	t[i] = str[i];
	i++;
	}
	return (t);
}
