#include <stdio.h>
#include "main.h"
/**
*_isdigit - returns 1 if character is uppercase, 0 otherwise
*@c: character to check
*
*Return: 1(uppercase), 0(otherwise)
*/

int _isdigit(int c)
{
	if (c >= 48 && c < 58)
		return (1);
	else
		return (0);
}

