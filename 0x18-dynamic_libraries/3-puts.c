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
	int i = _strlen(str);
	int j;

	for (j = 0; j < i; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
