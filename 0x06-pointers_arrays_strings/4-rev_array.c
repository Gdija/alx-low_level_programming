#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a: array
 * @n: integer
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int rev;
	int i;

	for (i = 0; i < n; i++)
	{
	n--;
	rev = a[i];
	a[i] = a[n];
	a[n] = rev;
	}
}
