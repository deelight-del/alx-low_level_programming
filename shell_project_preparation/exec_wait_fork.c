#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <sys/types.h>

/**
  *main - function that executes a given command 5 times
  *
  *Return: 0, if successful.
  */

int main(void)
{
	int status, i = 0;
	pid_t pid;
	char *filename = "/bin/ls";
	char *argv[] = {"/bin/ls", "-l", "/tmp", NULL};
	char *envp[] = {NULL};

	while (i < 5)
	{
		pid = fork();
		if (pid == -1)
		{
			perror("Error, can't fork a new process\n");
			return (1);
		}
		if (pid == 0)
		{
			execve(filename, argv, envp);
			perror("Error, can't execute given command\n");
			return (1);
		}
		else
		{
			wait(&status);
			if (WIFEXITED(status))
			{
				printf("Child process executed, and ended successfully: %d\n",
						WEXITSTATUS(status));
			}
		}
		i++;
	}

	return (0);
}
