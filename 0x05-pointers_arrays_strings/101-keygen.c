#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define size 10

/**
*main - generates random pw that cracks
*
*Return: 0(success)
*/

int main(void)
{
	int i;
	int Arr[size];

	srand(time(NULL));

	for (i = 0; i < size; i++)
	{
		Arr[i] = rand();
	}
	return (0)
}
