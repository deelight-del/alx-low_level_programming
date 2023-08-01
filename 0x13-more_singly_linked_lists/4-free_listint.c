#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
  *free_listint - function to free list
  *@head: pointer to head node
  *
  *Return: void
*/

void free_listint(listint_t *head)
{
	listint_t *p = head;

	if (head == NULL)
		return;

	while (p)
	{
		p = head->next;
		free(head);
		head = p;
	}
}
