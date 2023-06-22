#include <stdio.h>
#include "main.h"
/**
*print_most_numbers - Print numbers from 0 - 9 excluding 2 & 4
*
*Return: void
*/

void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i != 2 || i != 4)
			_putchar('0' + i);
	}
	_putchar('\n');
return;
}
