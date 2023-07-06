#include <stdio.h>
#include "main.h"

/**
*_puts_recursion - prints the value of strings
*@s: The string to print
*
*Return: chars in a string
*/

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
