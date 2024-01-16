#include "search_algos.h"
/**
 * binary_search_exp - This uses the half-interval method to search through
 * a record, halving the set of records each time.
 * @array: This is a pointer to the first element to search in.
 * @start_idx: The lower bound of the search
 * @end_idx: The upper bound of the search space.
 * @value: value of interest to search for.
 *
 * Return: The index of the value if found, and -1 otherwise.
 */
int binary_search_exp(int *array, int start_idx, int end_idx, int value)
{
	int mid_idx = start_idx;

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

/**
 * exponential_search - Function to search for a value using
 * Exponential Algorithm.
 * @array: The array to search for.
 * @size: size of the array.
 * @value: The value to search for.
 *
 * Return: -1 if the value can't be found, otherwise idx of value in array.
 */
int exponential_search(int *array, size_t size, int value)
{
	int i = 1, low, high, result;

	if (array == NULL)
		return (-1);
	if (value == array[0])
		return (0);
	while (i < (int)size && array[i] < value)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		i *= 2;
	}
	low = i / 2;
	if (i < (int)size)
		high = i;
	else
		high = size - 1;
	printf("Value found between indexes [%d] and [%d]\n", low, high);
	result = binary_search_exp(array, low, high, value);
	if (result == -1)
		return (-1);
	return (result);
}
