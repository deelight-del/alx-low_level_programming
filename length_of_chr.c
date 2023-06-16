#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

/**
*main - While loop to track the value of char.
*Description - char are special ints, and are stored in C as integers,
*either signed or unsigned. We will print the values of char as if it were and
* int to prove that they are int
*
*Return: Exits (EXIT_SUCCESS)
*/

main()
{
char c;

c=CHAR_MIN  /*CHAR_MIN=-127*/;
while(c != CHAR_MAX) /*CHAR_MAX=+127*/
{
printf("%d\n", c);
c++;
}
exit(EXIT_SUCCESS);
}
