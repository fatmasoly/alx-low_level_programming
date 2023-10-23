#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t list
 * @head: pointer to the head of the list
 * @index: index of the node to retrieve (starting at 0)
 *
 * Return: the nth node or NULL if the node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int n;
for (n = 0 ; n < index && head != NULL ; n++)
{
head = head->next;
}
return ((n == index && head != NULL) ? head : NULL);
}

