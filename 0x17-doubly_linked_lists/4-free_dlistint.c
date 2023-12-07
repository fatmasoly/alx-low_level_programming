#include "lists.h"
#include <stdlib.h>
/**
 * free_dlistint - Frees a dlistint_t list.
 * @head: Pointer to the head of the list.
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *temp, *next;
temp = head;
while (temp != NULL)
{
next = temp->next;
free(temp);
temp = next;
}
}
