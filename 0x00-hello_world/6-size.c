#include <stdio.h>
/** main - returns 0 but prinss
*
*Return: returns int 0
*/

int main(void)
{
char i;
int j;
long long int k;
float l;
printf("Size of a char: %lu byte(s)\n\
		Size of an int: %lu byte(s)\n\
		Size of a long long int: %lu bytess)\n\
	Size of a float: %lu byte(s)\n", sizeof(i), sizeof(j), sizeof(k), sizeof(l));
return (0);
}
