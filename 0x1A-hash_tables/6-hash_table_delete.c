#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_delete - Function to delete a hash table @ht
 * @ht: pointer to a hash table.
 *
 * Return: void.
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *head, *next;
	unsigned long int i;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		head = ht->array[i];
		while (head)
		{
			next = head->next;
			free(head->key);
			free(head->value);
			free(head);
			head = next;
		}
	}
	free(ht->array);
	free(ht);
}
