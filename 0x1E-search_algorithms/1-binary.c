#include "search_algos.h"
/**
 * binary_search - This uses the half-interval method to search through
 * a record, halving the set of records each time.
 * @array: This is a pointer to the first element to search in.
 * @size: The size of the original array.
 * @value: value of interest to search for.
 *
 * Return: The index of the value if found, and -1 otherwise.
 */
int binary_search(int *array, size_t size, int value)
{
	int start_idx = 0, end_idx = ((int)size) - 1, mid_idx = start_idx;

	if (array == NULL)
		return (-1);
	while (start_idx <= end_idx)
	{
		print_array(array, start_idx, end_idx);
		mid_idx = (start_idx + end_idx) / 2;
		if (value == array[mid_idx])
			return (mid_idx);
		if (value > array[mid_idx])
			start_idx = mid_idx + 1;
		else if (value < array[mid_idx])
			end_idx = mid_idx - 1;
	}
	if (value == array[mid_idx])
	{
		print_array(array, start_idx, end_idx);
		return (mid_idx);
	}
	return (-1);
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
