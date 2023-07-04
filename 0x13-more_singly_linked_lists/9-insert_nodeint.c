#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * insert_nodeint_at_index -  inserts a new node at a given position
 * @head: pointer
 * @idx: index
 * @n: data to insert
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int node;
	listint_t *new, *current = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
	return (NULL);
	}
	new->n = n;
	if (idx == 0)
	{
	new->next = current;
	(*head) = new;
	return (new);
	}
	for (node = 0; node < (idx - 1); node++)
	{
	if (current == NULL || current->next == NULL)
	{
	return (NULL);
	}
	current = current->next;
	}
	new->next = current->next;
	current->next = new;
	return (new);
}
