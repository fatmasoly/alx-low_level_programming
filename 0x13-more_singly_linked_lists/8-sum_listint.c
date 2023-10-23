#include "lists.h"
/**
 * sum_listint - returns the sum of all data in a listint_t list
 * @head: pointer to the head of the list
 *
 * Return: the sum of all data, or 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
int sum = 0;
for (; head != NULL ; head = head->next)
{
sum += head->n;
}
return (sum);
}

