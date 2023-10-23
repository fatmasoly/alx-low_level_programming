#include "lists.h"
/**
 * pop_listint - removes the first node of a listint_t list and returns value
 * @head: pointer to the pointer to the head of the list
 *
 * Return: the integer value of the removed node or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
listint_t *temp;
int n;
if (head == NULL || *head == NULL)
{
return (0);
}
temp = (*head)->next;
n = (*head)->n;
free(*head);
*head = temp;
return (n);
}

