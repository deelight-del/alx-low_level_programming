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
alpha = 'a';
upper = 'A';
for (i = 0; i < 26; i++)
putchar(alpha++);
for (i = 0; i < 26; i++)
putchar(upper++);
putchar('\n');
return (0);
}
