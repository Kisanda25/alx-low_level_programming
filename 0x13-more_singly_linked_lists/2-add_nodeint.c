#include "lists.h"

/**
 * add_nodeint - a function that adds a new node at the beginning of a list
 * @head: the pointer to the first node in the linked list
 * @n: the data of the new node
 * Return: address of new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr = malloc(sizeof(listint_t));

	if (!ptr)
	return (NULL);

	ptr->n = n;
	ptr->next = *head;

	*head = ptr;

	return (ptr);
}
