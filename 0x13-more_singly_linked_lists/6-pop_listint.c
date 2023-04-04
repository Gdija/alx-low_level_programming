#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * pop_listint - deletes the head node of a list
 * @head: pointer
 * Return: the head node’s data or 0 if it's empty
 */
int pop_listint(listint_t **head)
{
	listint_t *current;
	int i;

	if (!head || !*head)
	{
	return (0);
	}
	i = (*head)->n;
	current = (*head)->next;
	free(*head);
	*head = current;
	return (i);
}
