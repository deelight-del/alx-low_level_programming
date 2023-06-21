#include <stdio.h>
#include "main.h"
/**
*print_times_table - Prints n times table, starting from 0
*@n: number to multiplied unto
*Return: void
*/

void print_times_table(int n)
{
int i, j, tens, hun, rem_hun, unit, val;
if (n < 0 || n > 15)
return;
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
val = i * j;
hun = val / 100;
rem_hun = val % 100;
tens = rem_hun / 10;
unit = rem_hun % 10;
if (hun != 0)
{
_putchar(hun + '0');
_putchar(tens + '0');
}
else if (tens != 0)
_putchar(tens + '0');
_putchar(unit + '0');
if (j == n)
_putchar('\n');
else
{
_putchar(',');
if ((val + i) > 99)
_putchar(' ');}
else if ((val + i) > 9)
{
_putchar(' ');
_putchar(' ');
}
else
{
_putchar(' ');
_putchar(' ');
_putchar(' ');
}}}}
return;
}
