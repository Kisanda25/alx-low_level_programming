#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns the node at a certain index
 * @head: first node in the linked list
 * @index: index of the node to return
 *
 * Return: pointer to the node we're looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;
	listint_t *holder = head;

	while (holder && x < index)
	{
		holder = holder->next;
		x++;
	}

	if (holder)
	{
	return (holder);
	}
	else
	{
	return (NULL);
	}
}

