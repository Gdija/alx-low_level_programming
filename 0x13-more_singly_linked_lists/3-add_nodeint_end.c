#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a list
 * @head: linked list
 * @n: data to insert
 * Return: the address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *lastNode =  *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
	return (NULL);
	}
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
	*head = new;
	return (new);
	}
	while (lastNode->next)
	{
	lastNode = lastNode->next;
	}
	lastNode->next = new;
	return (new);
}


