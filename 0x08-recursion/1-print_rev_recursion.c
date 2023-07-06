#include <stdio.h>
#include "main.h"
#include <string.h>

/**
*_print_rev_recursion - print strings in reverse
*@s: string to print reverse
*
*Return: void
*/

void _print_rev_recursion(char *s)
{
	int len = strlen(s) - 1;
	char *p = &s[len];

	_putchar(*p);

	if (*p == *s)
	{
		_putchar('\n');
		return;
	}
	_print_rev_recursion(p - 1);
}
