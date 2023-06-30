#include <stdio.h>
#include "main.h"
/**
*cap_string - converts lower case characters after special to uppercase
*@char: string to convert to uppercase
*
*Return: uppercase of char
*/

char *cap_string(char *str)
{
	char *p = str;
	int i = 0;

	for (; *p != '\0'; p++, i++)
	{
		if (check(*p))
		{
			if (*(p + 1) != '\0')
			{
				if (*(p + 1) >= 97 && *(p + 1) < 123)
				{
					*(str + i + 1) = *(p + 1) - 32;
				}

			}
		}
	}
	return (str);
}

int check(char chr)
{
	char standards[30] = {' ', ',', '\t', '.', ' ', '\n', ';', '!', \
		'?', '"', '(', ')', '{', '}', 'c'};
	int i;

	for (i = 0; *(standards + i) != 'c'; i++)
	{
		if (chr == *(standards + i))
		{
			return (1);
		}
	}

	return (0);

}
