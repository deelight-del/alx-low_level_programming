#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
  *add_nodeint_end - add a node at the begining of the list
  *@head: address of the head of the list
  *@n:int n variable of the new node
  *Return: A listint pointer.
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *temp, *h = *head;

	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;
	if (h == NULL)
	{
		h = newnode;
		h->next = NULL;
	}
	else
	{
		temp = h;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newnode;
	}
	*head = h;
	return (*head);
}
