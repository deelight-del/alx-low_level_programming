#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
  *print_path_name - prints path nemaeif the path to the file exist
  *@full_pathname: path name to the file
  *
  *Return: 0 if successful, and -1 otherwise
  */

int print_path_name(char *full_pathname)
{
	if (full_pathname != NULL)
		printf("%s\n", full_pathname);

	return (0);
}

/**
  *dir_or_not - checks if the pathname includes a directory or not
  *@pathname: pathname to the file system object
  *
  *Return: 0 if true, -1 if not
  */

int dir_or_not(char *pathname)
{
	unsigned int i = 0;

	while (pathname[i] != '\0')
	{
		if (pathname[i] == '/')
		{
			return (0);
		}
		i++;
	}
	return (-1);
}

/**
  *cmd_or_not - checks if a given pathname is a cmd or not
  *@pathname: pathname to fs object
  *
  *Return: 0 if true, -1 otherwise.
  */

int cmd_or_not(char *pathname)
{
	struct stat buf;
	unsigned int access_modes, remainder;

	if (stat(pathname, &buf) == 0)
	{
		access_modes = buf.st_mode & 0777;
		/*printf("%u\n", access_modes);*/
		while (access_modes)
		{
			remainder = access_modes % 8;
			/*printf("remainder: %u\n", remainder);*/
			if (remainder % 2)
				return (0);
			access_modes = access_modes / 8;
		}
	}
	return (-1);
}

/**
  *get_cmd_path - function to get command full pathname if cmd exists
  *@text_from_line: Raw text that should come from command line
  *
  *Return: An actual string if given command is a command, or NULL otherwise
  */

char *get_cmd_path(char *text_from_line)
{
	char *path_str, *token, *full_path;
	struct stat buf;

	if (dir_or_not(text_from_line) == 0)
	{
		if (cmd_or_not(text_from_line) == 0)
		{
			full_path = strdup(text_from_line);
			if (full_path == NULL)
				return (NULL);
			return (full_path);
		}
			return (NULL);
	}
	else
	{
		path_str = getenv("PATH");
		token = strtok(path_str, ":");
		while (token != NULL)
		{
			full_path = malloc(sizeof(char) * 1024);
			if (full_path == NULL)
				return (NULL);
			strcpy(full_path, token);
			if (full_path == NULL)
				return (NULL);
			strcat(full_path, "/");
			strcat(full_path, text_from_line);
			if (stat(full_path, &buf) == 0)
			{
				return (full_path);
			}
			token = strtok(NULL, ":");
			free(full_path);
		}
	}
	return (NULL);  /*free text, if str is not null*/
}

/**
  *main - function to put all the above functions to make which
  *@argc: count of arguments
  *@argv: vector of arguments
  *
  *Return: 0
  */


int main(int argc, char **argv)
{
	char *full_path_name = NULL;
	int i;

	if (argc < 2)
	{
		printf("Usage: %s ...\n", argv[0]);
	}

	for (i = 1; i < argc; i++)
	{
		printf("index %d\n", i);
		full_path_name = get_cmd_path(argv[i]);
		print_path_name(full_path_name);
		printf("ith argument is %s\n", argv[i]);
		printf("index %d\n", i);
		printf("full pathname is %s\n", full_path_name);
	}
	return (0);
}
