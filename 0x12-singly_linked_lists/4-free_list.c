#include "lists.h"
/**
 * free_list - Frees a list_t linked list.
 * @head: A pointer to the head of the list.
 *
 * Description: This function frees the memory allocated for each node and its
 * corresponding string in a list_t linked list. It properly deallocates all
 * resources to prevent memory leaks.
 */
void free_list(list_t *head)
{
list_t *curr;
list_t *next;
curr = head;
while (head != NULL)
{
next = curr->next;
free(curr->str);
free(curr);
curr = next;
}
}

