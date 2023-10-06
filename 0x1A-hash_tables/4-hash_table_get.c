#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_get - Function to get a specific value from a key.
 * @ht: pointer to hashtable
 * @key: The key to hash.
 *
 * Return: The value if found, NULL otherwise.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *head;
	unsigned long int index;

	if (ht == NULL || key == NULL || key[0] == '\0')
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	head = ht->array[index];
	if (head == NULL)
		return (NULL);
	while (head)
	{
		if (strcmp(head->key, key) == 0)
			return (head->value);
		if (head)
			head = head->next;
	}
	return (NULL);
}
