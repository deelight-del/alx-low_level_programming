#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
  *free_listint2 - function to free and delete a LL
  *@head: The adress of the head node
  *
  *Return: void
*/

void free_listint2(listint_t **head)
{
	listint_t *h, *p, *temp;

	if (head == NULL)
		return;
	h = *head;
	p = temp = h;

	if (h == NULL || head == NULL)
		return;

	else
	{
		while (p)
		{
			p = temp->next;
			free(temp);
			temp = p;
		}
		*head = NULL;
	}
}
