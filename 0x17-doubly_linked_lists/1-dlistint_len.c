#include "lists.h"

/**
 * dlistint_len - a function that returns the number of elements in a list
 * @h : the linked list that will be traversed and counted
 * Return: the number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
