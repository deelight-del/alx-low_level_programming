#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
  *get_len - used to obtain the length of unsigned long int as a binar
  *@n: unsigned long int to evaluate
  *
  *Return: length of the variable
  */

int get_len(unsigned long int n)
{
	int i = 0;

	if (n == 0 || n == 1)
		return (1);

	while (n)
	{
		n = n / 2;
		i++;
	}
	return (i);
}

/**
  *power - function to take index and number to give a result of power
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
	/*unsigned int len = get_len(*n);*/
	unsigned long int bit;

	bit = power_get_bit(2, index);

	*n = *n | (unsigned long int)bit;
	return (1);
}
