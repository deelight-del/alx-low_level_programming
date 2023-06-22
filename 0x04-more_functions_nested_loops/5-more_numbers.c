#include <stdio.h>
#include "main.h"

/**
*more_numbers - print 10 times the numbers from 0 - 14
*
*Return: void
*/

void more_numbers(void)
{
	int i;
	int digit;
	int unit;

	for (i = 1; i <= 10; i++)
	{
		for (digit = 0; digit <= 14; digit++)
		{
			unit = digit;
			if (digit > 9)
			{
				unit = digit % 10;
				_putchar('0' + 1);
			}
			_putchar('0' + unit);
		}
		_putchar('\n');  /*prints new line after each loop 0 - 10*/
	}
return;
}
