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
	num = 612;

	for (i = 2; i < num/2; i = i++)
	{
		if (num % i == 0)
		{
			f = i;

			if (f == 2)
			{
				pf = 2;
			}
			else
			{
				for (j = 2; j <= f/2; j++)
				{	
					if (f % j == 0)
					{
						pf = 0;
						break;
					}
					else
					{
						pf = f;
					}
				}
			}

		}
	}
	printf("%ld", pf);
}
