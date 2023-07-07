#include <stdio.h>
#include "main.h"

/**
*prime_helper - helps to get to prinme
*@n: integer to find prime
*@i: integer i to start evaluation from
*@j: half of n
*
*Return: 1 if prime and 0 otherwise
*/

int prime_helper(int n, int i, int j)
{
	if (n % i == 0)
		return (0);
	else if (n % i != 0 && i > j)
		return (1);

	return (prime_helper(n, i + 1, j));
}

/**
*is_prime_number - helps to check for prime number
*@n: int to check prime
*
*Return: 1 or 0
*/

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_helper(n, 2, (n / 2) + 1));
}
