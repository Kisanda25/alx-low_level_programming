#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list.
 * @head: Pointer to the head of the doubly linked list.
 * @index: Index of the node to return.
 * Return: Pointer to the node at the given index, or NULL if it does not exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int count = 0;
dlistint_t *current = head;

while (current != NULL && count < index)
{
current = current->next;
count++;
}

if (count == index)
return (current);
else
return (NULL);
}
