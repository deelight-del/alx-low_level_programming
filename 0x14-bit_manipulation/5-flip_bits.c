#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  *flip_bits - function to count the number of bits to be flipped
  *@n: The first value to be flipped
  *@m: The second value to be flipped
  *
  *Return: The count of bit to be flipped
  */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	int j, i;

	j = sizeof(unsigned long int);

	for (i = j; i >= 0; i--)
	{
		count = count + (((m >> i) & 1) ^ ((n >> i) & 1));
	}

	return (count);
}
