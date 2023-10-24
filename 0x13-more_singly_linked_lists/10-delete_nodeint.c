#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at a given position
 * @head: pointer to the pointer to the head of the list
 * @index: index of the node to be deleted (starting at 0)
 *
 * Return: 1 if deletion succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int pos = 0;
listint_t *delete_node, *temp;
if (*head == NULL)
return (-1);
if (index == 0)
{
delete_node = *head;
*head = delete_node->next;
free(delete_node);
return (1);
}
temp = *head;
for (pos = 0 ; temp != NULL ; pos++, temp = temp->next)
{
if (pos == (index - 1))
{
delete_node = temp->next;
if (delete_node == NULL)
return (-1);
temp->next = delete_node->next;
free(delete_node);
return (1);
}
}
return (-1);
}

