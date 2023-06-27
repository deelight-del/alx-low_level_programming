#include <stdio.h>
#include "main.h"
/**
*rev_string - prints string in reverse to stdout
*@s: string to print
*
*Return: void
*/

void rev_string(char *s)
{
	int i = _strlen(s);
	int j;
	char temphold[1000];
	int k = 0;

	for (j = i - 1; j >= 0; j--)
	{
		*(temphold + k) = s[j];
		k++;
	}	
	for (k = 0; k < i; k++)
	{
		*(s + k) = temphold[k];
	}
}

/**
*_strlen - returns length of the string
*@s: pointer variable
*
*Return: int (length of string)
*/

int _strlen(char *s)
{
	int ret;
	int i;

	for (i = 0; *s != '\0'; i++)
	{
		s++; /* increase pointer by one */
	}
	ret = i;
	return (ret);
}
