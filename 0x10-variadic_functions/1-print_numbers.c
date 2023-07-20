#include <stdio.h>
#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>

/**
*print_numbers - prints numbers seperated by seperator
*@seperator: string seperator to seperate arguments
*@n: number of variables to print
*
*Return: void.
*/

void print_numbers(const char *seperator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int arg;

	if (n == 0)
		return;

	va_start(args, n);

	for (i = 1; i <= n; i++)
	{
		arg = va_arg(args, int);
		printf("%d", arg);

		if (i == n)
			putchar("\n");
		if (seperator != NULL && i != n)
			printf("%s", seperator);
	}
	va_end(args);
}
