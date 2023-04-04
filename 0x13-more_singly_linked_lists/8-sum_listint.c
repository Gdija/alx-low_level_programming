#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * sum_listint - the sum of all the data
 * @head: pointer
 * Return: if the list is empty, return 0 or the sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
	sum += head->n;
	head = head->next;
	}
	return (sum);
}
