#include "function_pointers.h"

/**
*array_iterator - iterate upon each array and
*perform some certain action as given by fuct pointer action
*@array: array pointer given
*@size: size of the array
*@action: function pointer of array given
*
*Return: Void
*/

void array_iterator(int *array, size_t size, void(*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(*(array + i));
	}
}
