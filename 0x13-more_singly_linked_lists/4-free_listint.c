#include "lists.h"

/**
 * free_listint - function that frees a linked list
 * @head: list that will be freed
 */
void free_listint(listint_t *head)
{
	listint_t *holder;

	while (head != NULL)
	{
		holder = head->next;
		free(head);
		head = holder;
	}
}

