#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"
#include <sys/wait.h>
#include <sys/types.h>
#include <string.h>

/**
  *main - Function to build super simple shell
  *
  *Return: returns 0, on success, and 1 otherwise
  */

int main(void)
{
	ssize_t n_read;
	char *line = NULL;
	size_t n;
	int len, status;
	char **argv, **envp = {NULL};
	pid_t child_pid;

	printf("#cisfun ");

	while ((n_read = getline(&line, &n, stdin)) != -1)
	{
		len = strlen(line); /*removing new line char - make function*/
		if (line[len -1] == '\n')
			line[len - 1] = '\0';
		argv = string_to_tokens(line);
		if (argv == NULL)
		{
			free(line);
			return (1);
		}
		child_pid = fork();
		if (child_pid == -1)
		{
			free(line);
			free_string_array(argv);
		}
		if (child_pid == 0)
		{
			execve(argv[0], argv, envp);
			dprintf(STDERR_FILENO, "Can't exec command %scheckfor space\n", argv[0]);
			perror("Error");
			free(line);
			free_string_array(argv);
			return (1);
		}
		else
		{
			wait(&status);
			free(line);
			free_string_array(argv);
		}
		printf("#cisfun ");
		line = NULL;
	}
	free(line);
	return (0);
}
