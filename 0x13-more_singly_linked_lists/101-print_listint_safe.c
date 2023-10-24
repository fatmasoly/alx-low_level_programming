#include "lists.h"
/**
 * print_listint_safe - Prints a listint_t linked list and checking for loops.
 * @head: A pointer to the head of the list.
 *
 * Return: The number of nodes If a loop is detected, exit with status 98.
 */
size_t print_listint_safe(const listint_t *head)
{
const listint_t *prev, *currt;
size_t count = 0;
prev = head;
currt = head;
while (prev != NULL && currt != NULL)
{
printf("[%p] %d\n", (void *)prev,  prev->n);
prev = prev->next;
currt = currt->next;
count++;
if (currt != NULL)
{
currt = currt->next;
count++;
}
if (prev == currt)
{
printf("-> [%p] %d\n", (void *)prev,  prev->n);
exit(98);
}
}
return (count);
}

