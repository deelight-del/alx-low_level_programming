#include <stdio.h>
#include "variadic_functions.h"
#include "string.h"
#include <stdarg.h>

/**
*print_all - print values according format given
*@format: format string to use to print
*
*Return: returns void
*/

void print_all(const char * const format, ...)
{
	int i, len;
	va_list args;
	char *sep = "", *str, *nil = "(nil)";

	i = 0;
	len = strlen(format);

	va_start(args, format);
	while (i < len)
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", sep, (char) va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", sep, (int) va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", sep, (float) va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL || strlen(str) == 0)
				{
					printf("%s%s", sep, nil);
					break;
				}
				printf("%s%s", sep, str);
				break;
		}
		sep = ", ";
		i++;
	}
	printf("\n");
	va_end(args);
}
