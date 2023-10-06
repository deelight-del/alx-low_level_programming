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

	ht = hash_table_create(1024);
	hash_table_set(ht, "betty", "cool");

	/*print what you stored*/
	idx = key_index((const unsigned char *) "betty", 1024);
	key = ht->array[idx]->key;
	value = ht->array[idx]->value;
	node_ptr = (ht->array[idx]);

	printf("The key here is %s, and value is %s, and the address is %p\n", key, value, (void *)node_ptr);
	
	
	/*Test for collision*/
	hash_table_set(ht, "joyful", "praise");
	idx = key_index((const unsigned char *) "joyful", 1024);
	key = ht->array[idx]->key;
	value = ht->array[idx]->value;
	node_ptr = (ht->array[idx]);
	printf("The key here is %s, and value is %s, and the address is %p\n", key, value, (void *)node_ptr);
	
	hash_table_set(ht, "synaphea", "balablu");
	idx = key_index((const unsigned char *) "synaphea", 1024);
	key = ht->array[idx]->key; /*ht->array[idx]->next->key; should give the same key as above --- joyful*/
	value = ht->array[idx]->value; /*ht-array[idx]->next->value; should give the same value as above value -- praise*/
	node_ptr = (ht->array[idx]);
	printf("The key here is %s, and value is %s, and the address is %p\n", key, value, (void *)node_ptr);
	

	hash_table_set(ht, "david", "");
	idx = key_index((const unsigned char *) "david", 1024);
	key = ht->array[idx]->key; /*ht->array[idx]->next->key; should give the same key as above --- joyful*/
	value = ht->array[idx]->value; /*ht-array[idx]->next->value; should give the same value as above value -- praise*/
	node_ptr = (ht->array[idx]);
	printf("The key here is %s, and value is %s, and the address is %p\n", key, value, (void *)node_ptr);
	

	return (EXIT_SUCCESS);
}
