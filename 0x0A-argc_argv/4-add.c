#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
*main - adds the positive numbers
*@argc: number of arguments
*@argv: vector of arguments
*
*Return: result from addition
*/

int main(int argc, char *argv[])
{
	int result = 0;
	int i;

	for (i = 1; i < argc; i++)
		if (is_str_digit(argv[i]))
		{
			result += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	printf("%d\n", result);
	return (0);
}


/**
*is_str_digit - check if string does not conttain char or symbols
*@str: string to check
*
*Return: 1, if success, 0 otherwise
*/

int is_str_digit(char *str)
{
	char *p = str;

	for (; *p != '\0'; p++)
	{
		if (!isdigit(*p))
		{
			return (0);
		}
	}
	return (1);
}
