#include "lists.h"
/**
 * print_listint_safe - Prints a listint_t linked list and checking for loops.
 * @head: A pointer to the head of the list.
 *
 * Return: The number of nodes If a loop is detected, exit with status 98.
 */
size_t print_listint_safe(const listint_t *head)
{
const listint_t *prev;
size_t count = 0;
prev = head;
while (prev != NULL)
{
printf("[%p] %d\n", (void *)prev,  prev->n);
count++;
if (prev <= prev->next)
{
printf("-> [%p] %d\n", (void *)prev->next, prev->next->n);
exit(98);
}
prev = prev->next;
}
return (count);
}

