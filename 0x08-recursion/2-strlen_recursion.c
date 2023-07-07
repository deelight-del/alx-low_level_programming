#include <stdio.h>
#include "main.h"

/**
*_strlen_recursion - calculates length of rcursion
*@s: string to get length
*
*Return: int
*/

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	return (1 + _strlen_recursion(s + 1));
}
