#include <stdio.h>
#include "main.h"

/**
  *get_endianness - function to test for the endianness of computer
  *
  *Return: integer that signifies big endian or not
  */

int get_endianness(void)
{
	int n = 1;
	char *p;

	p = (char *)&n;

	if (*p)
		return (1);
	else
		return (0);
}
