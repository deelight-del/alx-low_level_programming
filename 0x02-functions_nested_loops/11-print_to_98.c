#include <stdio.h>
#include <stdlib.h>
/**
*print_to_98 - prints number from firsr to n
*@n: number to print from to 98
*
*Return: void
*/

void print_to_98(int n)
{
int i;
if (n <= 98)
{
for (i = n; i <= 98; i++)
	printf("%d", i);
	if (i == 98)
		printf("\n");
	else
		printf(", ");

}
else
{
for (i = n; i >= 98; i--)
	printf("%d", i);
	if (i == 98)
		printf("\n");
	else
		printf(", ");
}
return;
}
