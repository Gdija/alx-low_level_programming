#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * delete_nodeint_at_index - deletes the node at index
 * @head:pointer
 * @index: index of a node
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *current = *head;
	unsigned int node;

	if (current == NULL)
	{
	return (-1);
	}
	if (index == 0)
	{
	*head = (*head)->next;
	free(current);
	return (1);
	}
	for (node = 0; node < (index - 1); node++)
	{
	if (current->next == NULL)
	return (-1);
	current = current->next;
	}
	tmp = current->next;
	current->next = tmp->next;
	free(tmp);
	return (1);
}
