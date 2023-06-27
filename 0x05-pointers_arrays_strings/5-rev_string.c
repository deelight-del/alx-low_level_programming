#include <stdio.h>
#include "main.h"

/**
*rev_string - reverses a given string
*@s: operand to reverse
*
*Return: void
*/

void rev_string(char *s)
{
	int len;
	char *rev;
	char *p;
	int i;

	i = 0;

	len = _strlen(s);

	for (p = s + (len - 1); p >= s; p--)
	{
		*(rev + i) = *p;
		i++;
	}
	/*make s equal to rev for each element */
	for (i = 0; i < len; i++)
	{
		*(s + i) = *(rev + i);
	}
}
