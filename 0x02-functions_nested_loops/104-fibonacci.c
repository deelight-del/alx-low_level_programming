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
unsigned long int a;
unsigned long int b;
unsigned long int ab;
a = 1;
b = 2;
printf("%ld, ", a);
printf("%ld, ", b);

for (i = 0; i < 98; i++)
{
ab = a + b;
printf("%ld", ab);
a = b;
b = ab;
if (i == 97)
printf("\n");
else
printf(", ");
}
return (0);
}
