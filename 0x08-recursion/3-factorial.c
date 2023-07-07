#include <stdio.h>
#include "main.h"

/**
*factorial - Calculate factorial of given num
*@n: integer number to do factorial for
*
*Return: integer result
*/

int factorial(int n)
{
	if (n == 1 || n == 0)
		return (1);
	if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
