#include <stdio.h>
#include "main.h"
/**
*main - This will print _putchar
*
*Return: 0(Success)
*/

int main(void)
{
char str[] = "_putchar";
char *p;
for (p = str; *p != '\0'; p++)
{
putchar(*p);
}
putchar('\n');
return (0);
}
