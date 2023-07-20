#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
*sum_them_all - function to sum up all numbers passed as argument
*@n: number of arguments passed to function
*
*Return: integer sum of all values
*/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, result = 0;

	if (n == 0)
		return (0);

	var_list args;

	var_start(args, n);

	for (i = 1; i <= n; i++)
	{
		arg = var_arg(args, int);
		result += arg;
	}
	var_end(args);
	return (result);
}
