#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h : the linked list that will be traversed and printed
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	if (h == NULL)
	printf("linked list is empty");

	listint_t *ptr = NULL;

	ptr = h;

	while (ptr != NULL)
	{
	count++;
	printf("%d", ptr->n);
	ptr = ptr->next;
	}
	return (count);
}
