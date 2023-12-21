#include "hash_tables.h"
/**
 * hash_table_print - Prints the contents of a hash table.
 * @ht: The hash table to be printed.
 *
 * Description: This function prints the key-value pairs in the hash table
 *              in the format: {'key': 'value', 'key': 'value', ...}.
 *              If the hash table or its array is NULL, the function does
 *              not perform any action.
 */
void hash_table_print(const hash_table_t *ht)
{
hash_node_t *node = NULL;
unsigned long int i = 0, flag = 0;
if (!ht || !ht->array)
return;
putchar('{');
for (i = 0; i < ht->size; ++i)
{
node = ht->array[i];
while (node)
{
if (flag)
printf(", ");
flag = 1;
printf("\'%s\': \'%s\'", node->key, node->value);
node = node->next;
}
}
printf("}\n");
}

