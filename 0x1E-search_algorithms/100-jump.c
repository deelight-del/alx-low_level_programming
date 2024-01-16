#include "search_algos.h"
#include <math.h>
/**
 * linear_search_jump - Function to search within an array using linear search.
 * @array: A pointer to the first element of the array to search in.
 * @start: The begin of the array to search for.
 * @end: The end of the array to seach for
 * @value: The value to search for.
 *
 * Return: idx of value in array, if value is present; -1 otherwise.
 */
int linear_search_jump(int *array, size_t start, size_t end, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = start; i <= end; i++)
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
	int initial_jump = 0, prev_jump = 0, result;
	size_t start, end;

	if (array == NULL)
		return (-1);
	while (initial_jump < (int)size)
	{
		if (array[initial_jump] < value)
		{
			printf("Value checked array[%d] = [%d]\n",
					initial_jump, array[initial_jump]);
			prev_jump = initial_jump;
			initial_jump += sqrt(size);
			continue;
		}
		break;
	}
	start = (size_t)prev_jump;
	if (start + sqrt(size) < size - 1)
		end = (size_t)(start + sqrt(size));
	else
		end = size - 1;
	printf("Value found between indexes [%lu] and [%lu]\n",
			start, (size_t)(start + sqrt(size)));

	result = linear_search_jump(array, start, end, value);
	if (result == -1)
		return (-1);
	return (result);
}
