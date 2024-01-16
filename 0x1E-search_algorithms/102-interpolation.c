#include "search_algos.h"
/**
 * linear_interpolation - Mathematical formula to calculate the
 * position at a given low, high.
 * @array: The given array.
 * @high: The given high.
 * @low: The given low of an array.
 * @value: The value to search for.
 *
 * Return: The estimate of the value to search for.
 */
size_t linear_interpolation(int *array, int low, int high, int value)
{
	size_t pos;

	pos = low + (((double)(high - low) / (array[high] - array[low]))
			* (value - array[low]));
	return (pos);
}

/**
 * interpolation_search - Function to initiate the use of interpolation
 * search algorithm
 * @array: The array to perform interpolation search.
 * @size: The size of the array.
 * @value: The value to compare with.
 *
 * Return: The index of the value if found, -1 otherwise.
 */
int interpolation_search(int *array, size_t size, int value)
{
	int low = 0, high = (int)size - 1;
	size_t pos = 0;

	while (low <= high)
	{
		pos = linear_interpolation(array, low, high, value);
		if (pos < size)
			printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		else
		{
			printf("Value checked array[%lu] is out of range\n", pos);
			break;
		}
		if (value == array[pos])
			return ((int)pos);
		if (value > array[pos])
			low = pos + 1;
		else
			high = pos - 1;
	}
	return (-1);
}
