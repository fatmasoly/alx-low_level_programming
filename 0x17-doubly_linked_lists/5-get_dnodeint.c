#include "lists.h"
#include <stdio.h>

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list.
 * @head: Pointer to the head of the list.
 * @index: Index of the node, starting from 0.
 * Return: The nth node, or NULL if the node does not exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int x;
dlistint_t *temp = head;
for (x = 0 ; temp != NULL && x < index ; x++)
{
temp = temp->next;
}
return (temp);
}

