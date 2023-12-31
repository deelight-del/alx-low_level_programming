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

	if (format == NULL)
	{
		printf("\n");
		return;
	}
	i = 0;
	len = strlen(format);
	va_start(args, format);
	while (i < len)
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", sep, va_arg(args, int));
				sep = ", ";
				break;
			case 'i':
				printf("%s%d", sep, va_arg(args, int));
				sep = ", ";
				break;
			case 'f':
				printf("%s%f", sep, va_arg(args, double));
				sep = ", ";
				break;
			case 's':
				str = va_arg(args, char *);
				print_string(str, sep);
				sep = ", ";
		}
		i++;
	}
	printf("\n");
	va_end(args);
}

/**
  *print_string - checks and print strings appropritately
  *@str: string to check and fix
  *@sep: string seperator
  *
  *Return: void
*/

void print_string(char *str, char *sep)
{
	char *nil = "(nil)";

	if (str == NULL)
	{
		printf("%s%s", sep, nil);
		return;
	}
	printf("%s%s", sep, str);
}
