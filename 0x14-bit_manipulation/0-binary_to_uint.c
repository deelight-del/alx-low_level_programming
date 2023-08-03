#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include "string.h"

/**
  *binary_to_uint - convert binary to unsigned int
  *@b: string to convert from binary to unsigned int
  *
  *Return: unsigned int from conversion
  */

unsigned int binary_to_uint(const char *b)
{
	int len, i, index;
	unsigned int ret_value = 0;

	if (b == NULL)
		return (0);
	len = strlen(b);
	index = len - 1;
	i = 0;

	while (i < len)
	{
		if (b[i] == '1' || b[i] == '0')
		{
			ret_value += (b[i] - 48) * power(2, index);
		}
		else
			return (0);
		i++;
		index--;
	}

	return (ret_value);
}

/**
  *power - function to take index and number to give a result of power
  *@num: base number
  *@index: number to raise to power to
  *
  *Return: an unsigned int
  */

unsigned int power(int num, int index)
{
	unsigned int ret = num;
	int i;

	if (index == 0)
	{
		ret = 1;
	}

	for (i = 0; i < index - 1; i++)
		ret *=  num;
	return (ret);
}
