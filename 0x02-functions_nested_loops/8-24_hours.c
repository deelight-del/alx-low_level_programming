#include <stdio.h>
#include "main.h"
/**jack_bauer - Prints every minute and time.
*
*Return: returns void
*/

void jack_bauer(void)
{
int j;
int k;
int m;
int l;
for (j = 0; j < 3; j++)
{
if (j != 2)
{
for (k = 0; k < 10; k++)
{
for (l = 0; l < 6; l++)
{
for (m = 0; m < 10; m++)
{
_putchar(j + '0');
_putchar(k + '0');
_putchar(58);
_putchar(l + '0');
_putchar(m + '0');
_putchar('\n');
}}}}
else
{
for (k = 0; k < 4; k++)
{
for (l = 0; l < 6; l++)
{
for (m = 0; m < 10; m++)
{
_putchar(j + '0');
_putchar(k + '0');
_putchar(58);
_putchar(l + '0');
_putchar(m + '0');
_putchar('\n');
}}}}}
return;
}
