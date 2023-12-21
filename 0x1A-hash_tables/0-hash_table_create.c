#include "hash_tables.h"

/**
 * hash_table_create - creat hash table
 *
 * @size: size of the array in the table
 *
 * Return: the new table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table = malloc(sizeof(hash_table_t));

	if (!new_table)
		return (NULL);
	new_table->size = size;
	new_table->array = calloc(size, sizeof(hash_node_t *));
	if (!new_table->array)
	{
		free(new_table);
		return (NULL);
	}
	return (new_table);
}
