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
	char *sep = "", *str;

	i = 0;
	len = strlen(format);

	va_start(args, format);
	while (i < len)
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", sep, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", sep, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", sep, va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				if (strlen(str) == 0)
					str = "(nil)";
				printf("%s%s", sep, str);
				break;
		}
		sep = ", ";
		i++;
	}
	va_end(args);
	printf("\n");
}