#include <stdio.h>
#include "main.h"

/**
*print_array - prints n number of arrays
*@a: array to print from
*@n: number of times to print array
*
*Return: void
*/

void print_array(int *a, int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n - 1; i++)
		{
			printf("%d", a[i]);
			printf(", ");
		}
		printf("%d", a[n - 1]);
		printf("\n");
	}
	else
	{
		printf("\n");
	}
}
