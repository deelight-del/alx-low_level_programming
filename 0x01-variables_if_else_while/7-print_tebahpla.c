#include <stdio.h>
/**
*main - Prints alphabets in lower case and uppercase
*
*Return: 0(Succeess)
*/

int main(void)
{char alpha;
char upper;
int i;
alpha = 'z';
for (alpha; alpha>='a'; alpha--)
	putchar(alpha);
putchar('\n');
return (0);
}
