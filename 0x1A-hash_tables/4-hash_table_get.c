#include "hash_tables.h"
/**
 * hash_table_get - Retrieves the value associated
 * with a key in the hash table.
 * @ht: The hash table.
 * @key: The key to search for.
 *
 * Return: The value associated with the key
 * or NULL if the key is not found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
hash_node_t *node = NULL;
if (ht == NULL || key == NULL)
return (NULL);
node = ht->array[key_index((const unsigned char *)key, ht->size)];
while (node && strcmp(node->key, key) != 0)
node = node->next;
if (node == NULL)
return (NULL);
return (node->value);
}

