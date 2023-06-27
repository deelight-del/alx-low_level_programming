#include <stdio.h>
#include "main.h"

/**
*print_array - prints n number of arrays
*@a: array to print from
*
*Return: void
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n - 1; i ++)
	{
		printf(a[i]);
		printf(", ");
	}
	printf(a[n - 1]);
	printf("\n");
}
