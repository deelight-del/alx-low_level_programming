#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i;
	char *m;

	m = malloc(10);

	for (i = 0; i < 20; i++)
		    m[i] = 't';
	    
	printf("%d", m[12]);
	return (0);
}

