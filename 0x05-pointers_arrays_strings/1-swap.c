#include <stdio.h>
#include "main.h"
/**
*swap_int - swaps two integers in memory and in place
*@a: first operand
*@b: second operand
*
*Return: void
*/

void swap_int(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
