#include <stdio.h>
/**
*main - Prints hexadecimal digits
*
*Return: 0(Success)
*/

int main(void)
{
int hex;
for (hex = 0x0; hex <= 0xf; hex++)
if (hex < 10)
	putchar(hex + '0');
else
	putchar((hex % 10) + 'a');
putchar('\n');
return (0);
}
