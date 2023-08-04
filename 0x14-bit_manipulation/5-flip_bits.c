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
	unsigned long int bits_to_flip = n ^ m;

	count = brian_k(bits_to_flip);

	return (count);
}

/**
  *brian_k - Brian Kernigan algorithm for counting set bits
  *@a: digit to count bit
  *
  *Return: The count of bits
  */

unsigned int brian_k(unsigned long int a)
{
	unsigned int count = 0;
	unsigned long int b, c = a;

	while (c)
	{
		b = a - 1;
		c = a & b;
		a = c;
		count++;
	}

	return (count);
}
