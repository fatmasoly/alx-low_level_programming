#include "hash_tables.h"
/**
 * hash_table_delete - Deletes a hash table and its elements.
 * @ht: The hash table to be deleted.
 *
 * Description: This function frees the memory allocated for a hash table,
 *              including all its nodes and the array. It iterates through
 *              each bucket in the hash table, frees each node in the linked
 *              list, and then frees the array. Finally, it frees the memory
 *              allocated for the hash table structure itself.
 */
void hash_table_delete(hash_table_t *ht)
{
hash_node_t *current, *temp;
unsigned long int i;
if (ht == NULL)
return;
for (i = 0 ; i < ht->size ; i++)
{
current = ht->array[i];
while (current)
{
temp = current->next;
free(current->key);
free(current->value);
free(current);
current = temp;
}
}
free(ht->array);
free(ht);
}

