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
	int len = 1;

	while (str[len])
	{
	len++;
	}
	t = malloc((sizeof(char) * len) + 1);
	if (str == NULL)
	{
	return (NULL);
	}
	if (t == NULL)
	{
	return (NULL);
	}
	while (i < len)
	{
	t[i] = str[i];
	i++;
	}
	t[i] = '\0';
	return (t);
}
