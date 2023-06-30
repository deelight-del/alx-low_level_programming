#include <stdio.h>
#include "main.h"

/**
*reverse_array - reverses array given to it
*@a: the array to reverse
*@n: integer showing the length of array
*
*Return: void
*/

void reverse_array(int *a, int n)
{
	int *p;
	int i = 0;
	int temp[1000];

	p = (a + n - 1);

	for (i = 0; i <= n - 1; i++)
	{
		*(temp + i) = *p;
		p--;
	}
	for (i = 0; i <= n - 1; i++)
	{
		*(a + i) = temp[i];
	}
}
