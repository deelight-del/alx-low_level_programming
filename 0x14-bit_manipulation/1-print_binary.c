#include <stdio.h>
#include "main.h"

/**
  *print_binary - prints a representation of binary
  *@n: value to print binary for
  *
  *Return: void
*/

void print_binary(unsigned long int n) 
{
	    if (n > 1) 
	    {
		    print_binary(n >> 1);
			        
	    }
	        printf("%lu", n & 1);
}

