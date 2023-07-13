#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
*main - program to multiply two numbers
*@ac: arcument count
*@av: argument vector
*
*Return: 0 if success, otherwise failure
*/

int main(int ac, char *av[])
{
	long unsigned int result;

	if (ac != 3)
	{
		printf("Error\n");
		exit(98);
	}
	if (check_string(av[1]) && check_string(av[2]))
	{
		result = atoi(av[1]) * atoi(av[2]);
		printf("%lu\n", result);
	}
	else
	{
		printf("Error\n");
		exit(98);
	}
	return (0);
}

/**
*check_string - check if string is int or not
*@str: string to check
*
*Return: 1, True, 0 False
*/

int check_string(char *str)
{
	char *p;

	for (p = str; *p != '\0'; p++)
	{
		if (*p >= 48 && *p <= 57)
			continue;
		else
			return (0);
	}
	return (1);
}
