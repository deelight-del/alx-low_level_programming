#include <stdio.h>
/**
*main - Prints alphabets
*
*Return: 0(Succeess)
*/

int main(void)
{char alpha;
int i;
alpha = 'a';
for (i = 0; i < 26; i++)
putchar(alpha++);
putchar('\n');
return (0);
}
