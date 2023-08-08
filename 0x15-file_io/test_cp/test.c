#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>

int main() {
	int fd;

	fd = open("./test.txt", O_RDWR | O_CREAT, 00600);
	close(fd);
	printf("The fd is %d", fd);
	printf("The error is %d", errno);
	return 0;
}
