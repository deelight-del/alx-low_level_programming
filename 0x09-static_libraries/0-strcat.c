#include <stdio.h>
#include "main.h"
/**
*_strcat - concatenate src with dest
*@dest: first operand
*@src: second string
*
*Return: *char
*/

char *_strcat(char *dest, char *src)
{
	char *p;
	int i = 0;

	/*loop through dest without the terminating byte*/
	for (p = dest; *p != '\0'; p++)
	{
		*(dest + i) = *p;
		i++;
	}
	for (p = src; *p != '\0'; p++)
	{
		*(dest + i) = *p;
		i++;
	}
	*(dest + i) = '\0';

	return (dest);
}
