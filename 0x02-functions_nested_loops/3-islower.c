#include <stdio.h>
#include "main.h"
/**
_islower - checks if a given character is lower case or not
*
*Return: 1(lowercase), 0(if otherwise)
*/

int _islower(int c)
{if (c >= 97 && c < 123)
	return (1);
else
	return (0);
}
