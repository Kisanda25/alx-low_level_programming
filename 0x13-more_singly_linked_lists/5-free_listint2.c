#include "lists.h"

/**
 * free_listint2 - a function that frees a linked list
 * @head: pointer to the list to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *holder;

	if (head == NULL)
	return;

	while (*head)
	{
		holder = (*head)->next;
		free(*head);
		*head = holder;
	}

	*head = NULL;
}

