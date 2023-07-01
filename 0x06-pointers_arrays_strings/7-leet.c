#include <stdio.h>
#include "main.h"
/**
*leet - function that converts characters to leet
*@str: string to be converted
*
*Return: pointer to str
*/

char *leet(char *str)
{
	char *p = str;
	int i = 0;
	char leet[256] = {0};

	leet['A'] = '4';
	leet['E'] = '3';
	leet['O'] = '0';
	leet['T'] = '7';
	leet['L'] = '1';
	leet['a'] = '4';
	leet['e'] = '3';
	leet['o'] = '0';
	leet['t'] = '7';
	leet['l'] = '1';

	for (; *p != 0; p++, i++)
	{
		if (leet[(int)*p])
		{
			*(str + i) = *p;
		}
	}
	return (str);
}
