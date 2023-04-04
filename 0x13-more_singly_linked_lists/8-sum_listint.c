#include "lists.h"

/**
 * sum_listint - a function that returns the sum of all the data (n) of a list
 * @head: first node in the linked list
 *
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *holder = head;

	while (holder != NULL)
	{
		sum += holder->n;
		holder = holder->next;
	}

	return (sum);
}

