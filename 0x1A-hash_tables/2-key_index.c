#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
 * key_index - function that converts a hash value to within range of size.
 * @key: The key to be hashed.
 * @size: size of the hash table.
 *
 * Return: returns the respective index.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;
	unsigned long int index;

	hash_value = hash_djb2(key);
	index = hash_value % size;

	return (index);
}
