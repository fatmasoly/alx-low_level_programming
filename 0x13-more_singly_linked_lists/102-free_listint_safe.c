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
listint_t *ptr, *temp, *check;
size_t nodes = 0;
ptr = *h;
while (ptr != NULL)
{
check = *h;
while (check != ptr)
{
if (check == ptr->next)
{
printf("[%p] %d\n", (void *)ptr, ptr->n);
nodes++;
*h = ptr->next;
free(ptr);
ptr = *h;
break;
}
check = check->next;
}
if (check == ptr)
{
printf("[%p] %d\n", (void *)ptr, ptr->n);
nodes++;
temp = ptr;
ptr = ptr->next;
if (temp <= ptr)
{
printf("-> [%p] %d\n", (void *)ptr, ptr->n);
if (ptr == NULL)
*h = NULL;
else
*h = ptr->next;
free(temp);
break;
}
free(temp);
}
}
return (nodes);
}

