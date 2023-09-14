#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - Function to add new node at the begin of a DLL
 * @head: Address of the head pointer
 * @n: new integer value of the newnode
 *
 * Return: A double LL with the added new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	if (head == NULL || (*head) == NULL)
	{
		newnode->n = n;
		newnode->next = NULL;
		newnode->prev = NULL;
	}
	else
	{
		newnode->n = n;
		(*head)->prev = newnode;
		newnode->next = (*head);
		newnode->prev = NULL;
	}
	(*head) = newnode;
	return (newnode);
}
