#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dlistint - prints all the elements of a list
 * @h: pointer to a list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *node;
	size_t i = 0;

	for (node = (dlistint_t *)h; node; node = node->next)
	{
		printf("%d\n", node->n);
		i++;
	}
	return (i);
}
