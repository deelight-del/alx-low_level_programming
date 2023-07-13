#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
*string_nconcat - concat s1 and n part of s2
*@s1: first string to cat
*@s2: second string to cat
*@n: number of s2 to cat
*
*Return: pointer
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *mem;
	unsigned int i, m, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n >= strlen(s2))
		n = strlen(s2);

	m = strlen(s1);

	mem = malloc((sizeof(char) * (m + n)) + 1);

	if (mem == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
	{
		mem[i] = s1[i];
	}

	j = m;

	for (i = 0; i < n; j++, i++)
	{
		mem[j] = s2[i];
	}
	mem[m + n] = '\0';

	return (mem);
}
