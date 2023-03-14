#include "main.h"
#include <stdlib.h>
/**
 * *_strdup - copy of the string given as a parameter
 * @str: string
 * Return: nothing
 */
char *_strdup(char *str)
{
	char *t;
	int i = 0;
	int len = 0;

	while (str[len] != '\0')
	{
	len++;
	}
	if (str == NULL)
	{
	return (NULL);
	}
	t = malloc(sizeof(char) * (len + 1));
	if (t == NULL)
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
