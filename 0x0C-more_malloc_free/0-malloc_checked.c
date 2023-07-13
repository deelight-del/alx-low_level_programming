#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
*malloc_checked - allocate memory and return void ptr
*@b: size of memory to be alloc
*
*Return: void ptr
*/

void *malloc_checked(unsigned int b)
{
	void *ptr_mem = malloc(b);

	if (ptr_mem == NULL)
		exit(98);

	return (ptr_mem);
}
