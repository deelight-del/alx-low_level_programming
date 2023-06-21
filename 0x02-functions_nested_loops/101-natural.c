#include <stdio.h>
#include <stdlib.h>

/**
*main - computes and sums all multiples of 3 & 5 below 1024
*
*Return: 0(Success)
*/

int main(void)
{
int i, j;
j = 0;
for (i = 1; i <= 1024; i++)
{
if (i % 3 == 0 || i % 5 == 0)
{
j = j + i;
}
}
printf("%d", j);
printf("\n");
return (0);
}
