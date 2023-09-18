#include <stdio.h>
#include "main.h"

/**
*_strpbrk - searches for particular char
*@s: string to search for char
*@accept: char string to search for
*
*Return: a pointer to char
*/

char *_strpbrk(char *s, char *accept)
{
	char *p = s;

	for (; *p != '\0'; p++)
	{
		if (check_acc(accept, *p))
		{
			return (p);
		}
	}
	return ('\0');
}
