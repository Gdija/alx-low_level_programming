#include "lists.h"
#include <stdlib.h>
/**
 * list_len - returns the number of elements in a linked list
 * @h: pointer
 * Return: the number o elements
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
	i++;
	h = h->next;
	}
	return (i);
}
