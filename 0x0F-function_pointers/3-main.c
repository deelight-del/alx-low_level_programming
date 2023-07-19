#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
#include <string.h>

/**
*main - the function main that takes the respective arguments
*@ac: argument count
*@av: argument vector
*
*Return: an integer that is the value
*/

int main(int ac, char *av[])
{
	int a, b, result;
	int (*fptr)(int, int);

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(av[1]);
	b = atoi(av[3]);

	if ((strcmp(av[2], "%") == 0 || strcmp(av[2], "/") == 0) && b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	fptr = get_op_func(av[2]);

	if (fptr == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	result = fptr(a, b);

	printf("%d\n", result);

	return (0);
}
