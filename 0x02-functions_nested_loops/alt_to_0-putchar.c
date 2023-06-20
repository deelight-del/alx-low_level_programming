#include <string.h>
#include <stdio.h>
#include "main.h"

int main(void)
{
char str[] = "_putchar";
int i;
for (i = 0; i < strlen(str); i++)
{
_putchar(str[i]);
}
putchar('\n');
return (0);
}
