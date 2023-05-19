#include "lists.h"

/**
 * dlistint_len - a function that returns the number of elements in a list
 * @h : the linked list that will be traversed and counted
 * Return: the number of nodes
 */

size_t dlistint_len(const listint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (counter);
}
