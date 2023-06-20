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

for (alpha; alpha <= 'z'; alpha++)
{
_putchar(alpha);
}
return;
}
