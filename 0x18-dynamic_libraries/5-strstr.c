#include <stdio.h>
#include "main.h"

/**
*_strstr - a function that locates a substring
*@haystack: The haystack to look for something
*@needle: The needle to look for
*
*Return: character to return
*/

char *_strstr(char *haystack, char *needle)
{
	char *ptr_haystack = haystack;
	char *ptr_needle = needle;
	int i = 0;

	for (; *ptr_haystack != '\0'; ptr_haystack++)
	{
		if (*ptr_needle == *ptr_haystack && *ptr_needle != '\0')
		{
			ptr_needle++;
			i++;
		}
		else if (*ptr_needle != '\0')
		{
			ptr_needle = needle;
			i = 0;
		}
		else if (*ptr_needle == '\0')
		{
			break;
		}
	}
	if (*ptr_needle == '\0')
	{
		return (ptr_haystack - i);
	}
	return ('\0');
}
