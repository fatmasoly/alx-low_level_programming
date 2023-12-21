#include "hash_tables.h"
/**
 * hash_table_set - Adds or updates an element in the hash table.
 * @ht: The hash table.
 * @key: The key to add or update. Must not be an empty string.
 * @value: The value associated with the key. Must be duplicated.
 *
 * Return: 1 if the operation succeeded, 0 otherwise.
 * In case of collision, the new node is
 * added at the beginning of the list.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
hash_node_t *node;
if (ht == NULL || key == NULL)
return (0);
node = ht->array[key_index((const unsigned char *) key, ht->size)];
while (node && strcmp(node->key, key) != 0)
node = node->next;
if (node == NULL)
{
node = NULL;
node = malloc(sizeof(hash_node_t));
if (node == NULL)
return (0);
node->key = strdup(key), node->value = strdup(value);
if (!node->key || !node->value)
{
if (node->key)
free(node->key);
if (node->value)
free(node->value);
free(node);
return (0);
}
node->next = ht->array[key_index((const unsigned char *) key, ht->size)];
}
else
{
free(node->value);
node->value = strdup(value);
return (1);
}
ht->array[key_index((const unsigned char *) key, ht->size)] = node;
return (1);
}

