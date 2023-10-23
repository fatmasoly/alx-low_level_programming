#include "lists.h"
/**
 * free_listint2 - frees a listint_t list and sets the head to NULL
 * @head: pointer to the pointer to the head of the list
 */
void free_listint2(listint_t **head)
{
listint_t *nod, *temp;
if (!head)
{
return;
}
nod = *head;
while (nod)
{
temp = nod;
nod = nod->next;
free(temp);
}
*head = NULL;
}

