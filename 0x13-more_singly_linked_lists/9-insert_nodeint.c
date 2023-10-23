#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the pointer to the head of the list
 * @idx: index where the new node should be added (starting at 0)
 * @n: integer value to be stored in the new node
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int pos = 0;
listint_t *temp, *new;
new = malloc(sizeof(listint_t));
if (new == NULL)
{
return (NULL);
}
new->n = n;
if (idx == 0)
{
new->next = *head;
*head = new;
return (new);
}
temp = *head;
while (temp != NULL && pos < (idx - 1))
{
temp = temp->next;
pos++;
}
if (temp == NULL)
{
free(new);
return (NULL);
}
new->next = temp->next;
temp->next = new;
return (new);
}

