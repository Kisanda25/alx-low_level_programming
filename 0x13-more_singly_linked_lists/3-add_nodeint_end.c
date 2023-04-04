#include "lists.h"

/**
 * add_nodeint_end - a function that adds a new node at the end of a list
 * @head: the address of the first node
 * @n: the data of the new element
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp;
	listint_t *ptr = malloc(sizeof(listint_t));

	temp = *head;

	if (!ptr)
		return (NULL);

	temp->n = n;
	temp->next = NULL;

	if (*head == NULL)
	{
		*head = ptr;
		return (ptr);
	}

	while (ptr->next != NULL)
	{
	ptr = ptr->next;
	}
	ptr->next = temp;
	return (ptr);
}
