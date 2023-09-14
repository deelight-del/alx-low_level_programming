#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - Get given DLL at some given index
 * @head: The head pointer to the DLL
 * @index: index to retrieve given node from
 *
 * Return: The given node of NULL if not found
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *track;

	if (head == NULL)
		return (NULL);
	if (index == 0)
		return (head);
	i = 0;
	track = head;
	while (track->next)
	{
		track = track->next;
		i++;
		if (i == index)
			return (track);
	}
	return (NULL);
}
