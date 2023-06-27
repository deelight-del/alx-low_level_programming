#include <stdio.h>
#include "main.h"
/**
*puts2 - prints string to stdout
*@str: string to print
*
*Return: void
*/

void puts2(char *str)
{
	int i = _strlen(str);
	int j;

	for (j = 0; j < i; j + 2)
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
