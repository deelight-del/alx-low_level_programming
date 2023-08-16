#include <stdio.h>

extern char **environ;

int main(int ac, char **av, char **env)
{
	(void) ac;
	(void) av;

	printf("The address of global variable is: %p\n", (void *) environ);
	printf("The address of main-env variable is: %p\n:", (void *) env);
	return (0);
}
