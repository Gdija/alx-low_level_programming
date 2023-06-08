#include "main.h"
int strlen_rec(char *s);
int check_pal(char *s, int i, int len);
/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * @s: character
 * Return: 1 or 0
 */
int is_palindrome(char *s)
{
	if (*s == 0)
	{
	return (1);
	}
	return (check_pal(s, 0, strlen_rec(s)));
}
/**
 * strlen_rec - returns the length of a string
 * @s: string to calculate the length of
 *
 * Return: length of the string
 */
int strlen_rec(char *s)
{
	if (*s == '\0')
	{
	return (0);
	}
	return (1 + strlen_rec(s + 1));
}
/**
 * check_pal - checks the characters recursively for palindrome
 * @s: string to check
 * @i: iterator
 * @len: length of the string
 *
 * Return: 1 if palindrome, 0 if not
*/
int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_pal(s, i + 1, len - 1));
}
