#include <stdio.h>
/**
*main - Prints combination of all single digits
*
*Return: 0(Success)
*/

int main(void)
{
int i;
int j;
for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
putchar(i + '0');
putchar(j + '0');
if (i == 9 && j == 9)
	putchar('\n');
else
	putchar(',');
}
}
return (0);
}

