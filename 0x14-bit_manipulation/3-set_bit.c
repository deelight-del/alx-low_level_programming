#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  *power_get_bit - function to take index and number to give a result of power
  *@num: base number
  *@index: number to raise to power to
  *
  *Return: an unsigned int
  */

unsigned int power_get_bit(int num, unsigned int index)
{
	unsigned int ret = num;
	unsigned int i;

	if (index == 0)
	{
		ret = 1;
		return (ret);
	}

	for (i = 0; i < index - 1; i++)
		ret *=  num;
	return (ret);
}

/**
  *set_bit - function to set appropriate bit
  *@n: value to set
  *@index: index of value bit to set to 1
  *
  *Return: The value that it is set to
  */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int size;
	unsigned long int bit;

	size = (sizeof(unsigned long int) * 8) - 1;

	if (index > size)
		return (-1);

	bit = power_get_bit(2, index);

	*n = *n | (unsigned long int)bit;
	return (1);
}
