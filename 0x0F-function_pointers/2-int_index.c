#include "function_pointers.h"

/**
*int_index - function that returns index of value in an array
*that cmp function pointer compares for
*@array: array to be compared
*@size: size of the array
*@cmp: comparism function pointer
*
*Return: int, which is the index of value cmp is defined for
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
