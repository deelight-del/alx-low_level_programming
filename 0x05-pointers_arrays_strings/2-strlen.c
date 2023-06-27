#include <stdio.h>
#include "main.h"
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
