#include "lists.h"
/**
 * free_listint2 - frees a listint_t list and sets the head to NULL
 * @head: pointer to the pointer to the head of the list
 */
void free_listint2(listint_t **head)
{
listint_t *node, *temp;
node = *head;
while (node != NULL)
{
temp = node;
node = node->next;
free(temp);
}
*head = NULL;
}

