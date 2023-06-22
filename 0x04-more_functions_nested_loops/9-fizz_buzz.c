#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
*main - prints character for fizz or buzz or number depending on cond
*
*Return: 0(Success)
*/

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 5 == 0 && i % 3 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}

		/* Next is control for what to come after respective chars*/

		if (i == 100)
		{
			printf("\n");
		}
		else
		{
			printf(" ");
		}
	}
return (0);
}
