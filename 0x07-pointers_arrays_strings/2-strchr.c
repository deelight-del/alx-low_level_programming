#include <stdio.h>
#include "main.h"

/**
*_strchr - searches for particular char
*@s: string to search for char
*@c: char to search for
*
*Return: a pointer to char
*/

char *_strchr(char *s, char c)
{
	char *p = s;

	for (; *p != '\0'; p++)
	{
		if (*p == c)
		{
			return (p);
		}
	}
	return ('\0');
}
