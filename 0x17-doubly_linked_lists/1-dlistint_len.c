#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * dlistint_len - Function return count of a doubly linked list
 * @h: head pointer to the node
 *
 * Return: The size of the nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp;
	size_t count;

	if (h == NULL)
		return (0);

	count = 1;
	for (temp = h; temp->next != NULL; temp = temp->next)
	{
		count++;
	}
	return (count);
}
