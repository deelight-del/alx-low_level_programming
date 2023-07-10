#include <stdio.h>
#include <stdlib.h>
/**
*create_array - initializes array with char
*@size: size of array
*@c: char to init array with
*
*Return: an array or NULL if fails
*/

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	arr = malloc(size);

	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);

}
