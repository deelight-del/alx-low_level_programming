#include <stdio.h>
#include "main.h"
/**
*string_toupper - converts lower case characters to uppercase
*@str: string to convert to uppercase
*
*Return: uppercase of char
*/

char *string_toupper(char *str)
{
	char *p = str;
	int i = 0;

	for (; *p != '\0'; p++, i++)
	{
		if (*p >= 97 && *p < 123)
		{
			*(str + i) = *p - 32;
		}
	}
	return (str);
}
