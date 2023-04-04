#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * *get_nodeint_at_index - returns the nth node of a list
 * @head: pointer
 * @index: the index of the node
 * Return: Null if the node does not exist or the located node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
	if (head == NULL)
	{
	return (NULL);
	}
	else
	{
	head = head->next;
	}
	}
	return (head);
}

