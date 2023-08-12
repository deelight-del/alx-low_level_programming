#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
  *main - function that prints all the arguments
  *@ac: argument counts
  *@av: vector of arguments
  *
  *Return: 0, if successful
  */

int main(int ac, char **av)
{
	(void) ac;

	printf("The following are the arguments of this program\n");
	for (; *av != NULL; av++)
	{
		printf("%s\n", *av);
	}
	return (0);
}
