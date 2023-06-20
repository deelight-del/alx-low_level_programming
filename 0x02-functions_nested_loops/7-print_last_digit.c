#include <stdio.h>
#include "main.h"
/**
*print_last_digit - Returns value of last digit
*@n: number to be evaluated
*
*Return: return last digit of n
*/

int print_last_digit(int n)
{
int ret;
ret = n % 10;
if (ret < 0)
	ret = ret * -1;
return (ret);
}
