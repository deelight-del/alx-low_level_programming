#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned int n;

	n = flip_bits(1024, 1);
	printf("%u\n", n);
	n = flip_bits(402, 98);
	printf("%u\n", n);
	n = flip_bits(1024, 3);
	printf("%u\n", n);
	n = flip_bits(1024, 1025);
	printf("%u\n", n);
	
	n = brian_k(5);
	printf("count of 5 is %d\n", n);
	n = brian_k(0);
	printf("count of 0 is %d\n", n);
	n = brian_k(1);
	printf("count of 1 is %d\n", n);
	n = brian_k(1024);
	printf("count of 1024 is %d\n", n);
	n = brian_k(1023);
	printf("count of 1023 is %d\n", n);
	n = brian_k(10);
	printf("count of 10 is %d\n", n);

	return (0);
}
