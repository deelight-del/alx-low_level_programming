#include "function_pointers.h"
/**
*print_name - function that prints the name according
*to function given
*@name: string of name to print
*@f: function pointer to use
*
*Return: void
*/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;
	f(name);
}
