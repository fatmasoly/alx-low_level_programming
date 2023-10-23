#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer to the pointer to the head of the list
 * @n: integer value to be stored in the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *temp;
listint_t *new_end;
new_end = malloc(sizeof(listint_t));
if (new_end == NULL)
{
return (NULL);
}
new_end->n = n;
new_end->next = NULL;
if (*head == NULL)
{
*head = new_end;
}
else
{
temp = *head;
while (temp->next != NULL)
{
temp = temp->next;
}
temp->next = new_end;
}
return (new_end);
}

