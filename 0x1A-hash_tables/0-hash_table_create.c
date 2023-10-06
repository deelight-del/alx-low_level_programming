#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_create - Function to create a hash table of
 * specific size @size.
 *
 * @size: size of hash table.
 * Return: pointer to a hashtable.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int i;

	if (size == 0)
		return (NULL);

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);

	table->size = size;
	table->array = malloc(sizeof(hash_node_t *) * table->size);
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}
	for (i = 0; i < table->size; i++)
		table->array[i] = NULL;
	return (table);
}
