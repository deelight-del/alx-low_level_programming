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
	char temphold[60];
	int k = 0;

	for (j = i - 1; j >= 0; j--)
	{
		*(temphold + k) = s[j];
		k++;
	}
	
	for (k = 0; k < i; k++)
	{
		*(s + k) = temphold[k];
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
