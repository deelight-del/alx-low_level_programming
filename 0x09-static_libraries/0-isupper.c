#include <stdio.h>
#include "main.h"
/**
*_isupper - returns 1 if character is uppercase, 0 otherwise
*@c: character to check
*
*Return: 1(uppercase), 0(otherwise)
*/

int _isupper(int c)
{
	if (c >= 65 && c < 91)
		return (1);
	else
		return (0);
}

