#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main - Prints the sign of each value, last digit
*
*Return: 0(success)
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
int l = n % 10;
if (l > 5)
	printf("Last digit of %d is %d and is greater than 5\n", n, l);
if (l == 0)
	printf("Last digit of %d is %d and is 0\n", n, l);
if ((l < 6) & (l != 0))
printf("Last digit of %d is %d and is less than 6 and not zero\n", n, l);
return (0);
}
