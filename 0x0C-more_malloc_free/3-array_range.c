#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
*array_range - creates an array from min to max
*@min: minimum value included
*@max: maximum value included
*
*Return: a pointer to memory
*/

int *array_range(int min, int max)
{
	int *mem_ptr;
	int i, j = 0, size = max - min;

	if (min > max)
		return (NULL);

	mem_ptr = malloc(sizeof(int) * (size + 1));

	if (mem_ptr == NULL)
		return (NULL);

	for (i = min; i <= max; i++, j++)
	{
		mem_ptr[j] = i;
	}
	return (mem_ptr);
}
