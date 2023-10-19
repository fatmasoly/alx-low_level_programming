#include "lists.h"
/**
 * print_list - Prints all the elements of a list_t list
 * @h: Pointer to the head node of the list
 *
 * Description: This function traverses a linked list and prints each element.
 * It prints the string of the element along with its length in the format
 * [length] string. If the string is NULL, it prints [0] (nil). It also counts
 * the number of nodes while traversing the list.
 *
 * Return: The number of nodes in the list
 */
size_t print_list(const list_t *h)
{
size_t nod = 0;
while (h != NULL)
{
if (h->str == NULL)
{
printf("[0] (nil)\n");
}
else
{
printf("[%u] %s\n", h->len, h->str);
}
nod++;
h = h->next;
}
return (nod);
}

