#include <stdio.h>
/**
*main - This will print _putchar
*
*Result: 0(Success)
*/

int _putchar(char);

int main(void)
{
char str[] = "_putchar";
char *p;
for (p = str; *p != '\0'; p++)
{
_putchar(*p);
}
putchar('\n');
return (0);
};

#include <unistd.h>

/**
   * _putchar - writes the character c to stdout
    * @c: The character to print
     *
      * Return: On success 1.
       * On error, -1 is returned, and errno is set appropriately.
        */
int _putchar(char c)
{
		return (write(1, &c, 1));
}
