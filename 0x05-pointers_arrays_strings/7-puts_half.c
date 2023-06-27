#include <stdio.h>
#include "main.h"
/**
*puts_half - prints string to stdout
*@str: string to print to print half
*
*Return: void
*/

void puts_half(char *str)
{
	int i = _strlen(str);
	int j;
	int half;

	half = i / 2;

	if (i % 2 != 0)
	{
		half++;
	}

	for (j = half; j < i; j++)
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
