#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"
#include <string.h>

/**
  *append_text_to_file - function to append text to the file
  *@filename: pathname to create file
  *@text_content: content to append to fd
  *
  *Return: 1, if successful, -1 if not successful
  */

int append_text_to_file(const char *filename, char *text_content)
{
	int n_write, fd;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		n_write = write(fd, text_content, strlen(text_content));

		if (n_write == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
