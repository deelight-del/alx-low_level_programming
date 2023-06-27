#include <stdio.h>
#include "main.h"

/**
*_strcpy - copies string from src to dest
*@dest: string to output
*@src: string to input
*
*Return: pointer to string
*/

char *_strcpy(char *dest, char *src)
{
	char *p;
	int i = 0;

	for (p = src; *p != '\0'; p++)
	{
		*(dest + i) = *p;
		i++;
	}
	*(dest + i) = '\0';

	return (dest);
}
