#include <stdio.h>
#include <stdlib.h>
/**
*main - print result of multiplication
*@argc: number of argments
*@argv: vector of arguments
*
*Return: 0, if Success
*/

int main(int argc, char *argv[])
{
	int mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	mul = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", mul);
	return (0);
}
