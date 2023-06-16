#include <stdio.h>
/**
*main - Prints sizes
*
*Return: 0(Success)
*/

int main(void)
{
char i;
int j;
long int k;
long long int l;
float m;

printf("Size of a char: %lu byte(s)\n\
Size of an int: %lu byte(s)\n\
Size of a long int: %lu byte(s)\n\
Size of a long long int: %lu byte(s)\n\
Size of a float: %lu byte(s)\n",
sizeof(i), sizeof(j), sizeof(k), sizeof(l), sizeof(m));
return (0);
};
