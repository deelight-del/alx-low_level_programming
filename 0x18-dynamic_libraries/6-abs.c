#include <stdio.h>
#include "main.h"
/**
*_abs - returns the absolute of a given number
*@n: The number to be checked
*
*Return: +n(if > 0), +0(if 0), and +n(if < 0)
*/

int _abs(int n)
{
int ret;
if (n >= 0)
{
ret = n;
}
else
{
ret = n * -1;
}
return (ret);
}
