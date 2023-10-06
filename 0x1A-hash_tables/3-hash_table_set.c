#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_set - Function to add some values to a hashtable @ht
 * @ht: hash table, to update.
 * @key: The respective hash key to add value to.
 * @value: The value to be added to the hash key of @key
 *
 * Return: 1, if successful, and 0 if fails.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *slot, *node;

	if (key == NULL || key[0] == '\0')
		return (0);
	/*what if ht is NULL*/
	index = key_index((const unsigned char *) key, ht->size); /*index*/
	if (index >= ht->size)
		return (0);
	slot = ht->array[index]; /*slot shuld be a ptr to hash_node*/
	node = create_node(key, value);
	if (node == NULL)
		return (0);

	if (slot == NULL)
	{
		slot = node;
		ht->array[index] = slot;
	}
	else
	{
		node->next = slot;
		ht->array[index] = node;
	}
	return (1);
}

/**
 * create_node - Function to create node from key and respective values.
 * @key: The key of the node to create.
 * @value: The value of the respective hash nodes.
 *
 * Return: Success 1, oe 0(if it fails)
 */

hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *node;

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (NULL);

	node->key = malloc((sizeof(char) * strlen(key)) + 1);
	node->value = malloc((sizeof(char) * strlen(value)) + 1);
	node->next = malloc(sizeof(hash_node_t));
	if (node->key == NULL || node->value == NULL ||
			node->next == NULL)
	{
		if (node->key)
			free(node->key);
		if (node->value)
			free(node->value);
		if (node->next)
			free(node->next);
		free(node);
		return (NULL);
	}
	strcpy(node->key, key);
	strcpy(node->value, value);
	node->next = NULL;
	return (node);
}
