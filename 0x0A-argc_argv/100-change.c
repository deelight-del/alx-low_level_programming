#include <stdio.h>
#include <stdlib.h>

/**
*main - prints the number of change needed
*@argc: count of arguments
*@argv: vector of arguments
*
*Return: 0, if success, 1 otherwise
*/

int main(int argc, char *argv[])
{
	int count = 0, cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("%d\n", 0);
		return (0);
	}
	for (; cents > 0; count++)
	{
		if (cents >= 25)
		{
			cents -= 25;
		}
		else if (cents >= 10)
		{
			cents -= 10;
		}
		else if (cents >= 5)
		{
			cents -= 5;
		}
		else if (cents >= 2)
		{
			cents -= 2;
		}
		else if (cents >= 1)
		{
			cents -= 1;
		}}
	printf("%d\n", count);
	return (0);
}
