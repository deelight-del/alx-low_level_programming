#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
  *add_nodeint - add a node at the begining of the list
  *@head: address of the head of the list
  *@n:int n variable of the new node
  *Return: A listint pointer.
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode, *h = *head;

	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	if (head == NULL)
	{
		h = newnode;
		h->next = NULL;
	}
	else
	{
		newnode->next = h;
		h = newnode;
	}
	*head = h;
	return (*head);
}
