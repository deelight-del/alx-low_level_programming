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
	listint_t *h = *head;
	listint_t *p, *temp = h;

	if (h == NULL);
	else
	{
		while (p)
		{
			p = temp->next;
			free(temp);
			temp = p;
		}
	}
	
	*head = NULL;
}
