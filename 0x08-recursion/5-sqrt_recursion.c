#include <stdio.h>
#include "main.h"

/**
*_sqrt_helper - helps to check for sqrt
*@n: int to check its sqrt
*@i: int to start from 1
*
*Return: returns int sqrt for given i
*/

int _sqrt_helper(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	if (i * i > n)
	{
		return (-1);
	}
	return (_sqrt_helper(n, i + 1));
}

/**
*_sqrt_recursion - helps to check for sqrt
*@n: int to check its sqrt
*
*Return: returns square root
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}

	return (_sqrt_helper(n, 1));
}
