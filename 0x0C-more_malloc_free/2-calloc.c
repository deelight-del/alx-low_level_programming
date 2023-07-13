#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
*_calloc - contigious mem allocation for nmemb
*@nmemb: number of members of elements
*@size: size for each member
*
*Return: pointer to memory allocated
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem_ptr;
	unsigned int i;

	(void) i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem_ptr = malloc(nmemb * size);

	if (mem_ptr == NULL)
		return (NULL);
	memset(mem_ptr, 0, nmemb * size);
	return (mem_ptr);
}
