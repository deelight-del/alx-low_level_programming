#include <stdio.h>
#include "main.h"
/**
*times_table - Prints the 9 times table, starting from 0
*
*Return: void
*/

void times_table(void)
{
int i;
int j;
int tens;
int unit;
int val;

for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
val = i * j;
tens = val / 10;
unit = val % 10;
if (val > 9)
{
_putchar(tens + '0');
_putchar(unit + '0');
if (j == 9)
{
_putchar('\n');
}
else
{
_putchar(',');
_putchar(' ');
}}

else
{
_putchar(unit + '0');
if (j == 9)
{
_putchar('\n');
}
else
{
_putchar(',');
_putchar(' ');
_putchar(' ');
}}}}
return;
}
