#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
*main - print the largest prime factor of 61...
*
*Return: 0(Success)
*/

int main(void)
{
	long int num;
	long int f;
	long int pf;
	long int i;
	long int j;

	f = 2;
	pf = 1;
	num = 612852475143;

	for (i = 3; i < num/2; i = i + 2)
	{
		if (num % i == 0)
		{
			f = i;
			for (j = 2; j < f/2; f++)
			{
				if (f % j == 0)
				{
					break;
				}
				else
				{
					pf = f;
				}
			}

		}
	}
	printf("%ld", pf);
}
