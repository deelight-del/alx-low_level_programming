#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
*_realloc - to reallocate memory to a previous memory
*@ptr: pointer of previous memory
*@old_size: previous size of pointer
*@new_size: new size of new allocation
*
*Return: Poiner to the new location
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *mem;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		mem = malloc(new_size);
		if (mem == NULL)
			return (NULL);
		return (mem);
	}
	if (ptr != NULL && new_size != 0)
	{
		if (new_size == old_size)
			return (ptr);

		mem = malloc(new_size);
		if (mem == NULL)
			return (NULL);
		memcpy(mem, ptr, old_size);
		free(ptr);
	}
	return (mem);
}
