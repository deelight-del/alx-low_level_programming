#include "search_algos.h"
/**
 * advanced_binary_help - This uses the half-interval method to search through
 * a record, halving the set of records each time, using recursion.
 * @array: This is a pointer to the first element to search in.
 * @start: The start of the array.
 * @end: The end of the array.
 * @value: value of interest to search for.
 *
 * Return: The index of the value if found, and -1 otherwise.
 */
int advanced_binary_help(int *array, int start, int end, int value)
{
	int mid; /*start_ = start, end_ = end;*/

	print_array(array, start, end);
	if (value == array[start])
		return (start);
	if (value == array[end])
		return (end);
	if (start > end)
		return (-1);
	mid = (start + end) / 2;
	if (value >= array[mid])
		start = mid + 1;
	else
		end = mid - 1;
	return (advanced_binary_help(array, start, end, value));
}

/**
 * print_array - Help function to print content of an array.
 * @array: The array to print form
 * @start_idx: The index where to start print from
 * @end_idx: The index to stop printing.
 *
 * Return: void
 */
void print_array(int *array, int start_idx, int end_idx)
{
	int i;

	printf("Searching in array: ");
	for (i = start_idx; i <= end_idx; i++)
	{
		if (i != end_idx)
			printf("%d, ", array[i]);
		else
			printf("%d", array[i]);
	}
	printf("\n");
}

/**
 * advanced_binary - This function fully implements the advanced_binary_help
 * for recursively searching through an array.
 * @array: The array to search through.
 * @size: The size of the array.
 * @value: The value to search for.
 *
 * Return: The index of value in the array, or -1 otherwise.
 */
int advanced_binary(int *array, size_t size, int value)
{
	int index;

	if (array == NULL)
		return (-1);
	index = advanced_binary_help(array, 0, (int)size - 1, value);
	if (index == -1)
		return (-1);
	return (index);
}
