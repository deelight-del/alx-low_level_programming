#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
*print_list - function to print the elements of a node
*@h: ptr that points to the first node, and invariable
*all the other nodes through forward search
*
*Return: The number of nodes
*/

size_t print_list(const list_t *h)
{
	/*define ptr to list_t*/
	const list_t *nodePtr;
	size_t i;
	unsigned int len;
	char *string;

	if (h == NULL)
		return (-1);

	nodePtr = h;

	/*access the first node*/
	for (i = 0; nodePtr; i++)
	{
		if (!nodePtr->str)
		{
			len = 0;
			string = "(nil)";
		}
		else
		{
			len = nodePtr->len;
			string = nodePtr->str;
		}
		printf("[%d] %s\n", len, string);
		nodePtr = nodePtr->next;
	}
	return (i);
}
