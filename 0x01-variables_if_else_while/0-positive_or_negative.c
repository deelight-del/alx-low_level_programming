#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main - Control flow that prints a given value based on condition
*
*Description: Makes use of IF ELSE to evaluate certain conditions
*and prints if >0, <0, or =0. The variable is assigned randomly
*Return: 0(Success)
*/

int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
	printf("%d is positive\n", n);
else if (n == 0)
	printf("%d is zero\n", n);
else
	printf("%d is negative\n", n);
return (0);
}
