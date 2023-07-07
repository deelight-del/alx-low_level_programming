#include <stdio.h>
/*#include "main.h"*/
/**
*_isalpha - Returns 1 if character is an alphabet, and 0 otherwise
*@c: character to be checked
*
*Return: 1(alphabet), 0(if otherwise)
*/

int _isalpha(int c)
{
if ((c >= 97 && c < 123) || (c >= 65 && c < 91))
	return (1);
else
	return (0);
}
