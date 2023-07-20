#include <stdio.h>
#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>

/**
*print_strings - function to prints strings that are passed into it
*@seperator: seperator betweeen different strings
*@n: The number of strings that is passed into the function
*
*Return: void
*/

void print_strings(const char *seperator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	const char *str;

	if (n == 0)
		return;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(args, const char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (seperator != NULL && i != n - 1)
		{
			printf("%s", seperator);
		}
	}
	printf("\n");
	va_end(args);
}
