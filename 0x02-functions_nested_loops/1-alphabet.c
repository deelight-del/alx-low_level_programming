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

for (alpha = 'a'; alpha <= 'z'; alpha++)
{
_putchar(alpha);
}
return;
}
