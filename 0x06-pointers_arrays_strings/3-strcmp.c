#include <stdio.g>
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
	for(s1; s1 != '\0'; s1++)
	{
		if (*s1 < *s2)
		{
			s2++;
			return (-15);
		}
		else if (*s1 > *s2)
		{
			s2++;
			return (15);
		}
	}
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (0);
	}
	else if (*s1 == '\0' *s2 != '\0')
	{
		return (-15);
	}
}
