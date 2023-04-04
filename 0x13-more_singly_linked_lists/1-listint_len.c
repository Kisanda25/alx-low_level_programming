#include "lists.h"

/**
 * listint_len - a function that returns the number of elements in a list
 * @h : the linked list that will be traversed and counted
 * Return: the number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
