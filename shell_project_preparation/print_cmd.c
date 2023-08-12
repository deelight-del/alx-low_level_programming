#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"
/**
  *main - Function to take in a command and print it
  *
  *Retrn; 0, if successful
  */

int main(void)
{
	ssize_t n_read;
	char *line = NULL;
	size_t n;
	char **token_array;

	printf("$ ");
	n_read = getline(&line, &n, stdin);
	dprintf(STDOUT_FILENO, "Test new line %sFALL TO NEWLINE \n", line);
	if (n_read == -1)
	{
		free(line);
		exit(EXIT_FAILURE);
	}
	else
	{
		if ((token_array = string_to_tokens(line)) == NULL)
		{
			free(line);
			return (0);
		}
		print_string_array(token_array);
	}
	free(line);
	return (0);
}
