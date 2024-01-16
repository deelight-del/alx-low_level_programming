#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 *  * main - Entry point
 *   *
 *    * Return: Always EXIT_SUCCESS
 *     */
int main(void)
{
	int array[] = {
		0, 1, 2, 3, 4, 5, 6, 7, 8, 9
	};
	int arrayb[] = {
		8, 9
	};
	size_t size = sizeof(array) / sizeof(array[0]);
	size_t sizeb = sizeof(arrayb) / sizeof(array[0]);

	printf("Found %d at index: %d\n\n", 2, binary_search(array, size, 2));
	printf("Found %d at index: %d\n\n", 5, binary_search(array, 5, 5));
	printf("Found %d at index: %d\n\n", 999, binary_search(array, size, 999));
	printf("Found %d at index: %d\n\n", 9, binary_search(arrayb, sizeb, 9));
	printf("Found %d at index: %d\n\n", 8, binary_search(arrayb, sizeb, 8));
	printf("Found %d at index: %d\n\n", 5, binary_search(arrayb, sizeb, 5));
	printf("Found %d at index: %d\n\n", 10, binary_search(arrayb, sizeb, 10));
	return (EXIT_SUCCESS);
}
