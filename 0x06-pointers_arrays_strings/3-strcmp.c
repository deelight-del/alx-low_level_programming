#include <stdio.h>
#include "main.h"
/**
*_strcmp - compares two strings
*@s1: first string to compare
*@s2: second string to compare
*
*Return: return positive, negative, or 0
*/

int _strcmp(char *s1, char *s2)
{
	int val;

	for (; *s1 != '\0'; s1++, s2++)
	{
		if (*s1 != '\0')
		{
			val = *s1 - *s2;
			return (val);
		}
	}
	val = *s1 - *s2;   /*NULL is 0 on asci char*/
	return (val);

}
