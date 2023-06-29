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

	for (; *s1 != '\0'; s1++)
	{
		if (*s1 < *s2)
		{
			s2++;
			val = -15;
			return (val);
		}
		else if (*s1 > *s2)
		{
			s2++;
			val = 15;
			return (val);
		}
	}
	if (*s1 == '\0' && *s2 == '\0')
	{
		val = 0;
		return (val);
	}
	else if (*s1 == '\0' && *s2 != '\0')
	{
		val = -15;
	}
	return (val);

}
