#include <stdio.h>
#include "main.h"
/**
*_puts - prints string to stdout
*@str: string to print
*
*Return: void
*/

void _puts(char *str)
{
	int i;

	for (i = 0; *str != '\0'; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
