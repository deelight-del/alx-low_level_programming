#include <stdio.h>
#include "main.h"
/**
*print_triangle - prints triangle with # and space
*@size: size of triangle
*
*Return: void
*/

void print_triangle(int size)
{
	int i, j, deficit, space, k, space_off;

	if (size == 1)
	{
		_putchar('#');
		_putchar('\n');
	}
	else if (size > 1)
	{
		deficit = 0;
		for (i = 1; i <= size; i++)
		{
			deficit++;
			space = size - deficit;
			for (j = 1; j <= space; j++)
			{
				_putchar(' ');
			}
			space_off = space + 1;
			for (k = space_off; k <= size; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
return;
}
