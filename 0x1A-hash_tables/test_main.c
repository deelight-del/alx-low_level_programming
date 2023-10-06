#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 *  * main - check the code
 *   *
 *    * Return: Always EXIT_SUCCESS.
 *     */
int main(void)
{
	unsigned long int idx;
	char *key, *value;
	hash_node_t *node_ptr;
	/*const unsigned char *arg_key = "betty";*/
	hash_table_t *ht;

	(void) key;
	(void) value;

	ht = hash_table_create(1024);

	/*print what you stored*/
	idx = key_index((const unsigned char *) "betty", 1024);
	/*key = ht->array[idx]->key;*/
	node_ptr = (ht->array[idx]);
	printf("The fault is from main, value of idx is: %p\n", (void *)node_ptr);

	/*printf("The key here is, and value is %s\n", value);*/
	return (EXIT_SUCCESS);
}
