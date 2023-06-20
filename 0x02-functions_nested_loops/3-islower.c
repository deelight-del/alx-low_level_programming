#include <stdio.h>
#include "main.h"
/**
*_islower - Returns 1 if character is lower case, and 0 otherwise
*
*Return: 1(lowercase), 0(if otherwise)
*/

int _islower(int c)

{if (c >= 97 && c < 123)
	return (1);
else
	return (0);
}
