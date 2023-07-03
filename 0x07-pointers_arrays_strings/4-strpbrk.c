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

/**
*check_acc- check if a char is in a string
*@str: string to check
*@c: char to check
*
*Return: 1 or 0
*/

int check_acc(char *str, char c)
{
	char *pp = str;

	for (; *pp != '\0'; pp++)
	{
		if (*pp == c)
		{
			return (1);
		}
	}
	return (0);
}
