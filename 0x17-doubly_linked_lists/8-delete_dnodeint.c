#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - function to delete a given node at a
 * given index
 * @head: The address of the head pointer
 * @index: index to delete node from
 *
 * Return: 1 if successful, and -1 if not.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *track;

	if (head == NULL || (*head) == NULL)
		return (-1);
	track = (*head);

	if (index == 0)
	{
		if (track->next)
		{
			track->next->prev = NULL;
			(*head) = track->next;
		}
		else
			(*head) = NULL;
		free(track);
		return (1);
	}
	while (track->next)
	{
		if (i == index)
		{
			track->next->prev = track->prev;
			track->prev->next = track->next;
			free(track);
			return (1);
		}
		track = track->next;
		i++;
	}

	if (i == index)
	{
		track->prev->next = NULL;
		free(track);
		return (1);
	}
	return (-1);
}
