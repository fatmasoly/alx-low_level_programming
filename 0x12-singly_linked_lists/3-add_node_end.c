#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list_t list
 * @head: Double pointer to the head node of the list
 * @str: String to be duplicated and added to the new node
 *
 * Description: This function creates a new node, duplicates the provided string,
 * and adds the new node at the end of the list. It iterates through the list to
 * find the last node and updates the 'next' pointer of the last node to the new node.
 * If the function fails to allocate memory for the new node or the duplicated string,
 * it returns NULL.
 *
 * Return: The address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node;
list_t *end_node = *head;
new_node = malloc(sizeof(list_t));
if (new_node == NULL)
{
return (NULL);
}
new_node->str = strdup(str);
if (new_node->str == NULL)
{
free(new_node);
return (NULL);
}
new_node->len = strlen(str);
new_node->next = NULL;
if (*head == NULL)
{
*head = new_node;
}
else
{
while (end_node->next != NULL)
{
end_node = end_node->next;
}
end_node->next = new_node;
}
return (new_node);
}

