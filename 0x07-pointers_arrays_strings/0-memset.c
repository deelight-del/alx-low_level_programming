#include <stdio.h>
#include "main.h"

/**
*_memset - sets a byte into a memor for n times
*@s: pointer s where the memory starts from
*@b: what to set memory to
*@n: number of memories b to.
*
*Return: pointer to s.
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i <= n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
