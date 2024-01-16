#include "search_algos.h"
/**
 * linear_search - Function to search within an array using linear search.
 * @array: A pointer to the first element of the array to search in.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: idx of value in array, if value is present; -1 otherwise.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (compare_and_print(i, array[i], value) == 0)
			return ((int) i);
	}
	return (-1);
}

/**
 * compare_and_print - Helper function to do comparison and print
 * @idx: The index from array to compare from.
 * @val_from_array: The value from array.
 * @val_to_compare: The value we are comparing with/search for.
 *
 * Return: 0 if both values are equal, 1 if val_from_array is greater
 * -1 otherwise.
 */

int compare_and_print(size_t idx, int val_from_array, int val_to_compare)
{
	printf("Value checked array[%lu] = [%d]\n", idx, val_from_array);
	if (val_from_array == val_to_compare)
		return (0);
	else if (val_to_compare > val_from_array)
		return (1);
	else
		return (-1);
}

/**
 * jump_search - Function to implement the jump search algorithm.
 * @array: This is a pointer to the array.
 * @size: This is the size of the array to search in.
 * @value: This is the value to search for in the array.
 *
 * Return: Returns the idx, or -1 if it is not found.
 */
int jump_search(int *array, size_t size, int value)
{
	int initial_jump = 0;
}
