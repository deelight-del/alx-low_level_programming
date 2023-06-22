#include <stdio.h>
#include "main.h"

/**
*print_line - print line with '_' n times
*@n: number of times to print '_'
*
*Return: void
*/

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		i = 0;
		while (i < n)
		{
			_putchar('_');
			i++;
		}
	}
	_putchar('\n');
return;
}
