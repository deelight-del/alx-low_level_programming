#include <stdio.h>
/**
*main - Prints alphabets in lower case and uppercase
*
*Return: 0(Succeess)
*/

int main(void)
{char alpha;
for (alpha = 'z'; alpha >= 'a'; alpha--)
	putchar(alpha);
putchar('\n');
return (0);
}
