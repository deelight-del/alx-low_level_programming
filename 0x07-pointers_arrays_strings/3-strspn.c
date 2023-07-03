#include <stdio.h>
#include "main.h"

/**
*_strspn - gets length of prefix substring
*@s: string to check
*@accept: substring to measure length of
*
*Return: unsigned int
*/

unsigned int _strspn(char *s, char *accept)
{
	char *p = s;
	unsigned int i = 0;

	for (; *p != ' '; p++)
	{
		i += check_acc(accept, *p);
	}
	return (i);
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
