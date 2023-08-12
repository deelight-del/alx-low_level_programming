#include <unistd.h>
#include <gnu/libc-version.h>
#include <stdlib.h>
#include <stdio.h>

/**
  *main - Function to check for PID, and libc version
  *
  *Return: 0 if successful
  */

int main(void)
{
	pid_t pid;

	printf("The libc version in use is: %s\n", gnu_get_libc_version());
	pid = getpid();
	printf("THe PID for this process is %u\n", pid);
	pid = getpid();
	printf("The second PID for the same process is %u\n", pid);

	pid = getppid();
	printf("The parent process identifier is %u\n", pid);
	return (0);
}
