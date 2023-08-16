#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
  *_getenv - function to get a specific environment variable name
  *@name: name of variaable to retrieve from environment list
  *
  *Return: A pointer to characters.
  */

/*extern char **environ;*/

char *_getenv(char *name)
{
	char *env_copy, *token, *remnant;
	unsigned int i;

	for (i = 0; environ[i] != NULL; i++)
	{
		env_copy = strdup(environ[i]);
		if (env_copy == NULL)
			return (NULL);
		token = strtok(env_copy, "=");
		if (strcmp(token, name) == 0)
		{
			remnant = token + strlen(token) + 1;
			free(env_copy);
			return (remnant);
		}
		free(env_copy);
	}
	return (NULL);
}


/**
  *print_path_dir - Function to print path dirs.
  *
  *Return: 0, if successful, and -1 otherwise
  */

int print_path_dir(void)
{
	char *value = _getenv("PATH");
	char *token;
	
	if (value == NULL)
		return (-1);
	printf("%s\n", value);
	token = strtok(value, ":");

	while (token != NULL)
	{
		printf("%s\n", token);
		token = strtok(NULL, ":");
	}
	return (0);
}

/**
  *main - function to print the env variable obrained.
  *
  *Return: 0 if successful
  */

int main(void)
{
	int r;
	char *env_variable;
	char *env_variable2;

	env_variable = _getenv("DBUS_SESSION_BUS_yyyy");
	if (env_variable != NULL)
		printf("%s\n", env_variable);

	env_variable2 = _getenv("PATH");
	if (env_variable2 != NULL)
		printf("%s\n", env_variable2);

	r = print_path_dir();
	if (r == -1)
		printf("-1\n");
	return (0);
}
