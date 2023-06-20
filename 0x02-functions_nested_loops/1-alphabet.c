#include <stdio.h>
#include "main.h"

/**
*print_alphabet - prints alphabet in lowercase
*
*Return: void(success)
*/

void print_alphabet(void)
{
char alpha;
alpha = 'a';
int i;
i = 0;
for (i; i < 26; i++)
{
putchar(alpha++);
}
return;
}
