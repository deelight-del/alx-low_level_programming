#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - Add a new node at the end of the DLL
 * @head: address of the head pointer to DLL
 * @n: value to add to new DLL
 *
 *Return: address of new node if successful
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp, *newnode;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	if (head == NULL || (*head) == NULL)
	{
		newnode->next = NULL;
		newnode->prev = NULL;
		newnode->n = n;
		(*head) = newnode;
	}
	else
	{
		temp = (*head);
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = newnode;
		newnode->next = NULL;
		newnode->prev = temp;
		newnode->n = n;
	}
	return (newnode);
}
