#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - Free doubly linked list
 * @head: head pointer of the doubly linked list
 *
 * Return: A void.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *next;

	if (head == NULL)
		return;
	while (head->next)
	{
		next = head->next;
		free(head);
		head = next;
	}
	free(head);
}
