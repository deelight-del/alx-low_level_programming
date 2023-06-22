#include <stdio.h>
#include "main.h"
/**
* print_diagonal - Print diagonal line of size n
*@n: number of times to print diagonal line
*
*Return: void
*/

void print_diagonal(int n)
{
	int i;
	int k;
	int j;

	if (n > 0)
	{
		_putchar('\');
		_putchar('\n');

		k = 0;
		for (i = 1; i <= n - 1; i++)
		{
			k++;
			for (j = 1; j <= k; j++)
			{
				_putchar(' ');
			}
			_putchar('\');
			_puthchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
return;
}
