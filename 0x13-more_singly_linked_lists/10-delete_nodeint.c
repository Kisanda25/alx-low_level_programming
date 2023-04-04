#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @head: pointer to the first element
 * @index: index of the node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *holder = *head;
listint_t *current = NULL;
unsigned int x = 0;

if (*head == NULL)
return (-1);

if (index == 0)
{
*head = (*head)->next;
free(holder);
return (1);
}

while (x < index - 1)
{
if (!holder || !(holder->next))
return (-1);
holder = holder->next;
x++;
}


current = holder->next;
holder->next = current->next;
free(current);

return (1);
}

