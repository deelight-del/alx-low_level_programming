#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_dlistint - Function to add all the data in a dlist
 * @head: head pointer to the dlist
 *
 * Return: integer, that is a sum of all the data points
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *track;
	int total;

	if (head == NULL)
		return (0);
	total = 0;
	track = head;
	while (track->next)
	{
		total += track->n;
		track = track->next;
	}
	total += track->n;
	return (total);
}
