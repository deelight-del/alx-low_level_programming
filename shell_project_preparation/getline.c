#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	ssize_t n_read;
	char *line = NULL;
	size_t n_bytes;
	FILE *stream;

	if (ac != 2)
	{
		printf("....");
		return (-1);
	}
	stream = fopen(av[1], "r");
	while ((n_read = getline(&line, &n_bytes, stream)) != -1)
	{
		dprintf(1, "The number chars retrieved are %li\n", n_read);
		fwrite(line, 1, n_read, stdout);
	}
	free(line);
	fclose(stream);
	return (0);
}
