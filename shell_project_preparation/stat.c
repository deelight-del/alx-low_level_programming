#include <stdio.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>

/**
  *main - Function to chexk if a file is in the current PATH or not 
  *argc: count of arguments
  *argv: vector of arguments passed
  *
  *Return: 0, if successful, or 1 otherwise
  */

int main(int argc, char **argv)
{
	unsigned int i;
	struct stat buf;

	if (argc < 2)
	{
		printf("Usage: %s path_to_file ...\n", argv[0]);
		return (1);
	}
	i = 1;

	while(argv[i])
	{
		printf("%s", argv[i]);
		if(stat(argv[i], &buf) == 0)
		{
			printf(": FOUND\n");
		}
		else
		{
			printf(": NOT FOUND\n");
		}
		i++;
	}
	return (0);
}
