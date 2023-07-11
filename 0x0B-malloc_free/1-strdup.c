#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
*_strdup - copies a string to another memory
*@str: string to copy
*
*Return: pointer to string or null
*/

char *_strdup(char *str)
{
	int len;
	int i;
	char *str_arr;

	if (str == NULL)
		return (NULL);

	len = strlen(str);
	str_arr = malloc(len + 1);

	if (str_arr == NULL)
	{
		return (NULL);
	}
	if (len == 0)
	{
		str_arr[0] = str[0];
	}
	else
	{
		for (i = 0; i < len; i++)
			str_arr[i] = str[i];
	}

	return (str_arr);
}
