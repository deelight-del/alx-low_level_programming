#include <stdio.h>
/**
*main - print combinations of digits of
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

		if (i < j)
		{
			putchar(i + '0');
			putchar(j + '0');
		}
		if ((i == 8) && (j == 9))
			putchar('\n');
		else if (i < j)
		{
			putchar(',');
			putchar(' ');
		}
}

}
return (0);
}
