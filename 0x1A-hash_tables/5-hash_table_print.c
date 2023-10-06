#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_print - Function to print the entire hash table.
 * @ht: The hash table to print from.
 *
 * Return: void.
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *head;
	unsigned long int i;
	int element_count = 0;

	printf("{");
	if (ht)
	{
		for (i = 0; i < ht->size; i++)
		{
			head = ht->array[i];
			if (head)
			{
				if (element_count > 0)
					printf(", '%s':", head->key);
				else
					printf("'%s':", head->key);
				printf(" '%s'", head->value);
				element_count++;
			}
		}
	}
	printf("}\n");
}
