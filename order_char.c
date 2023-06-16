#include <stdio.h>
#include <stdlib.h>

/**
*main - print characters as they are ordered in machine
*
*Return; Exits with an exit status
*/

main(){
char c;
c='a';
while(c <= 'z'){
printf("character is: %c, value is: %d\n", c, c);
c++;
}
exit(EXIT_SUCCESS);
}

