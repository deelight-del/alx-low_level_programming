#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
#include <unistd.h>

/**
  *main - Demosntrate how the fork syscall works.
  *
  *Return: 0, if successful in both programs
  */

int main(void)
{
	pid_t child_pid, my_pid;

	printf("Before forking, exec is single\n");

	child_pid = fork();

	printf("After forking, process is duplicate henceforth\n");
	my_pid = getpid();
	printf("My pid is %u\n", my_pid);
	if (child_pid == 0)
	{
		printf("I am the child process, and my pid is %u\n", my_pid);
	}
	else
	{
		printf("I am the parent process, and my child pid is %u, \
				while my pid is %u\n", child_pid, my_pid);
	}
	return (0);
}
