#include <stdio.h>
#include "main.h"
/**
*print_rev - prints string in reverse to stdout
*@s: string to print
*
*Return: void
*/

void print_rev(char *s)
{
	int i = _strlen(s);
	int j;

	for (j = i - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}

/**
*_strlen - returns length of the string
*@s: pointer variable
*
*Return: int (length of string)
*/

int _strlen(char *s)
{
	int ret;
	int i;

	for (i = 0; *s != '\0'; i++)
	{
		s++; /* increase pointer by one */
	}
	ret = i;
	return (ret);
}
