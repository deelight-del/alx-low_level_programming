#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - Function to add node at a given index
 * @head: address of the head pointer
 * @idx: index to add
 * @n: data to be added to new node
 *
 * Return: The address of the new node if true and null otherwise
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **head,
		unsigned int idx, int n)
{
	dlistint_t *track, *newnode;
	unsigned int i;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	if ((*head) == NULL)
		(*head) = add_dnodeint_end(head, n);
	else
	{
		track = (*head);
		for (i = 0; i <= idx; i++)
		{
			if (track == NULL && idx != i)
				return (NULL);
			if (idx == i)
			{
				newnode->n = n;
				newnode->prev = track->prev;
				track->prev->next = newnode;
				track->prev = newnode;
				newnode->next = track;
			}
			track = track->next;
		}
	}
	return (newnode);
}
