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

	for (j = 0; j <= i; j++)
	{
		_putchar(str[j]);
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
