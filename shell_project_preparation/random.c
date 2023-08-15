#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(void)
{
	char *str = getenv("PATH");

	printf("%s\n", str);
	return (0);
}
