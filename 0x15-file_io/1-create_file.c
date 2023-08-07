#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"
#include <fcntl.h>
#include <string.h>

/**
  *create_file - function to create a file under certain conditions
  *@filename: The filename of file to create
  *@text_content: text content to be writtent into the file created
  *
  *Return: 1, if successful, -1 if not.
  */

int create_file(const char *filename, char *text_content)
{
	int fd, n_write;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC | O_EXCL,
			S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	n_write = write(fd, text_content, strlen(text_content));

	if (n_write == -1)
	{
		close(fd);
		return (-1);
	}
	return (1);
}
