#include "lists.h"

/**
 * print_dlistint - prints all the elements of a listint_t list
 * @h : the linked list that will be traversed and printed
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
	counter++;
	printf("%d\n", h->n);
	h = h->next;
	}
	return (counter);
}
