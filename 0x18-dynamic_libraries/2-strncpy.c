#include <stdio.h>
#include "main.h"
/**
* _strncpy - copies string
*@dest: destination to copy string to
*@src: source to copy str from
*@n: number of str to copy from src
*
*Return: pointer dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;


	while (i < n)
	{
		if (*src != '\0')
		{
			*(dest + i) = *src;
			src++;
		}
		else
			*(dest + i) = '\0';
		i++;
	}
	return (dest);
}
