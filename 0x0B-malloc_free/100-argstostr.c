#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
*argstostr - combines the arguments into
*@ac: argument content
*@av: argument vector
*
*Return: pointer to char
*/

char *argstostr(int ac, char **av)
{
	char *mem;
	int i = 0;
	int count = 0;
	char *p;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 1; i < ac; i++)
		count += strlen(av[i]) + 1;

	mem = malloc(sizeof(char) * count);

	if (mem == NULL)
		return (NULL);

	count = 0;

	for (i = 1; i < ac; i++)
	{
		p = av[i];

		for (; *p != '\0'; p++)
		{
			mem[count] = *p;
			count += 1;
		}
		mem[count] = '\n';
		count += 1;
	}
	return (mem);
}
