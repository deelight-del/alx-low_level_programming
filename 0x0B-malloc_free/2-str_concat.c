#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
*str_concat - concatenate two strings to obtain one
*@s1: first string
*@s2: second string
*
*Return: string to return
*/

char *str_concat(char *s1, char *s2)
{
	char *cat_str;
	unsigned long int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	cat_str = malloc(strlen(s1) + strlen(s2) + 1);

	if (cat_str == NULL)
		return (NULL);

	for (i = 0; i < strlen(s1); i++)
	{
		cat_str[i] = s1[i];
	}

	j = i;
	for (i = 0; i <= strlen(s2); i++)
		cat_str[i + j] = s2[i];

	return (cat_str);
}
