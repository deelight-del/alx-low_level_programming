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
	int *result, max, i, carry = 0;
	int *n1, *n2;
	char *s1;
	char *s2;

	s1 = av[1];
	s2 = av[2];

	if (ac != 3)
	{
		printf("Error\n");
		exit(98);
	}

	if (check_string(av[1]) && check_string(av[2]))
	{
		/*Obtain length of longest string*/

		if (strlen(av[1]) >= strlen(av[2]))
			max = strlen(av[1]);
		else
			max = strlen(av[2]);
		/*initialize the size of n1, and n2, and memset to zero*/
		n1 = malloc(sizeof(int) * max);
		n2 = malloc(sizeof(int) * max);

		memset(n1, 0, max);
		memset(n2, 0, max);

		/*Store reversed string of s1 and s2 into n1 and n2*/
		for (i = 0; s1[i] != '\0'; i++)
		{
			/*Using ascii value for int values that start at 48*/
			n1[i] = s1[strlen(s1) - i - 1] - 48;
		}
		for (i = 0; s2[i] != '\0'; i++)
		{
			n2[i] = s2[strlen(s2) - i - 1] - 48;
		}

		result = malloc(sizeof(int) * (max + 1));

		for (i = 0; i < max; i++)
		{
			result[i] = (n1[i] + n2[i] + carry) % 10;
			carry = (n1[i] + n2[i] + carry) / 10;
		}
		if (carry == 0)
			result[i] = 0;
		else
			result[i] = carry;
	}
	else
	{
		printf("Error\n");
		exit(98);
	}
	/*Print result*/
	for (i = max; i > 0; i--)
		printf("%d", result[i]);

	if (result[i] > 0)
		printf("%d", result[i]);
	printf("\n");
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
