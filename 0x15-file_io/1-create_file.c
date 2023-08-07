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
	int fd, n_write, len = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC,
			S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
	}
	if (text_content != NULL)
	{
		n_write = write(fd, text_content, len);
		if (n_write == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
