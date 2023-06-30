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
	for (; *str != '\0'; str++)
	{
		if (*str >= 97 && *str < 123)
		{
			*str = *str - 33;
		}
	}
	return (str);
}
