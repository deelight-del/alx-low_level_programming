#include <stdio.h>
/**
*main - Prints alphabets and exempts q and e
*
*Return: 0(Succeess)
*/

int main(void)
{char alpha;
int i;
char q;
char e;
alpha = 'a';
q = 'q';
e = 'e';
for (i = 0; i < 26; i++)
{
if ((alpha != q) && (alpha != e))
{
	putchar(alpha++);
}
else
{alpha++;}
}
putchar('\n');
return (0);
}
