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

for (i = 0; i < 26; i++)
{
putchar(alpha++);
}
return;
}
