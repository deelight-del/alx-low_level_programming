#include <stdio.h>
#include <unistd.h>

/**
  *main - Function to execs another program and does not return
  *
  *Return: 0, if calling another program fails
  */

int main(void)
{
	char *argv[] = {"/bin/ls", "-l", "/usr/", NULL};

	printf("Before execve\n");

	if ((execve(argv[0], argv, NULL)) == -1)
		perror("Error");

	printf("After Execve");
	return (0);
}
