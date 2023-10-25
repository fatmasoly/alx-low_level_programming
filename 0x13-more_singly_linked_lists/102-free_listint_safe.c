#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list safely.
 * @h: A pointer to a pointer to the head of the list.
 *
 * This function frees a listint_t list safely. It ensures that it
 * won't enter into an infinite loop while freeing the list and sets
 * the head to NULL after freeing.
 *
 * Return: The number of nodes freed from the list.
 */
size_t free_listint_safe(listint_t **h)
{
listint_t *ptr, *temp;
size_t nodes = 0;
ptr = *h;
while (ptr != NULL)
{
printf("[%p] %d\n", (void *)ptr, ptr->n);
nodes++;
temp = ptr;
ptr = ptr->next;
if (temp <= ptr)
{
if (ptr == NULL)
printf("-> [%p] %d\n", (void *)ptr, ptr->n);
else
printf("-> [%p] %d\n", (void *)ptr, ptr->n);
break;
}
free(temp);
}
*h = NULL;
return (nodes);
}

