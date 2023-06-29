#include <stdio.h>
#include "main.h"
/**
*_strncat - concatenate src with dest
*@dest: first operand
*@src: second string
*@n: number of src to append
*
*Return: *char
*/

char *_strncat(char *dest, char *src, int n)
{
	char *p;
	int i = 0;
	/*int size = sizeof(src);*/

	/*loop through dest without the terminating byte*/
	for (p = dest; *p != '\0'; p++)
	{
		*(dest + i) = *p;
		i++;
	}
	for (p = src; *p != '\0'; p++)
	{
		if (i < i + n)
		{
			*(dest + i) = *p;
			i++;
		}
		else
			break;
	}

	*(dest + i) = '\0';


	return (dest);
}
