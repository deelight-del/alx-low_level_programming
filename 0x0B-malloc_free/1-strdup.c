#include <stdlib.h>
#include <string.h>
/**
*_strdup - copies a string to another memory
*@str: string to copy
*
*Return: pointer to string or null
*/

char *_strdup(char *str)
{
	int len = strlen(str);
	int i;
	char *str_arr = malloc(len + 1);

	if (str[0] == '\0' || str_arr == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		str_arr[i] = str[i];

	return (str_arr);
}
