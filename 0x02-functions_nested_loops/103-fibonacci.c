#include <stdio.h>
#include <stdlib.h>
/**
*main - prints the first 50 fib
*
*Return: 0(Success)
*/

int main(void)
{
int i;
unsigned long int sum;
unsigned long int a;
unsigned long int b;
unsigned long int ab;
sum = 0;
a = 1;
b = 2;

for (i = 0; i < 48; i++)
{
ab = a + b;
if (i <= 4000000 && i % 2 == 0)
{
sum = sum + ab;
}
}
printf("%ld\n", sum);
return (0);
}
