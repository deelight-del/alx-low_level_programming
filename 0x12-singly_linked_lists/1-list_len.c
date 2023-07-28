#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
*list_len - function to print the length of elmementss of a list.
*@h: ptr that points to the first node, and invariable
*all the other nodes through forward search
*
*Return: The number of nodes
*/

size_t list_len(const list_t *h)
{
	/*define ptr to list_t*/
	const list_t *nodePtr;
	size_t i;

	if (h == NULL)
		return (0);

	nodePtr = h;

	/*access the first node*/
	for (i = 0; nodePtr; i++)
		nodePtr = nodePtr->next;
	return (i);
}
