#include <stdio.h>
/**
* main - Prints four numbers, pair seperated by space
*
*Return: 0(Success)
*/

int main(void)
{
int i, j, k, l;
int ij, kl;
for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
for (k = 0; k < 10; k++)
{
for (l = 0; l < 10; l++)
{
ij = i * 10 + j;
kl = k * 10 + l;
if (ij < kl)
{
putchar(i + '0');
putchar(j + '0');
putchar(' ');
putchar(k + '0');
putchar(l + '0');
}
if (ij == 98 && kl == 99)
	putchar('\n');
else if (ij < kl)
{putchar(',');
putchar(' ');
}
}
}
}
}
return (0);
}
