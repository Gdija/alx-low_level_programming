#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat -  concatenates two strings
 * @s1: string
 * @s2: string
 * @n: number
 * Return: nothing
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *t;
	unsigned int i = 0, j = 0, k = 0, m = 0;

	if (s1 == NULL)
	{
	s1 = "";
	}
	if (s2 == NULL)
	{
	s2 = "";
	}
	while (s1[i] != '\0')
	{
	i++;
	}
	while (s2[j] != '\0')
	{
	j++;
	}
	if (n >= j)
	{
	k = i + j;
	}
	else
	{
	k = i + n;
	}
	t = malloc(sizeof(char) * k + 1);
	if (t == NULL)
		return (NULL);

	j = 0;
	while (m < k)
	{
	if (m <= i)
		t[m] = s1[m];
	if (m >= i)
	{
		t[m] = s2[j];
		j++;
	}
	m++;
	}
	t[m] = '\0';
	return (t);
}
