#include <stdio.h>
#include "main.h"
#include <math.h>
/**
*_atoi - converts a string to an integer
*@s: string to convert to int
*
*Return: integer
*/

int _atoi(char *s)
{
	int *p;
/*	int sign; */
	int i = 0;
	int j, k;
	int len;
	char element;
	int num_ints;
	int val = 0;

	len = _strlen(s);

	for (j = 0; j < len; j++)
	{
		element = (char)*(s + j);
		if (element >= 47 && element < 57)
		{
			i++;
			*(p + i) = (int)element;
		}
		if (i == 0)
		{
			return (0);
		}
	}
	num_ints = sizeof(p) / sizeof(int);
	k = num_ints - 1;

	for (i = 0; i < k; i++)
	{
		val = val + ((int)*(p + i) * pow(10, k));
		k--;
	}
}
