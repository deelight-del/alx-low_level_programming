#include <stdio.h>
#include "main.h"

/**
*_memcpy - copies memory area
*@dest: destination is area to copy to
*@src: source area to copy from
*@n: number of areas to copy
*
*Return: character pointer
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p = src;
	int i;

	for (i = 0; i < (int)n; i++, p++)
	{
		*(dest + i) = *p;
	}
	return (dest);
}
