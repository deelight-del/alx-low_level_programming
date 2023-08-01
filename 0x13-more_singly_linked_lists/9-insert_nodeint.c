#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
  *insert_nodeint_at_index - functon to add node at given index
  *@head: address of the head node pointer
  *@idx: index of node to add new node
  *@n: value to add to new node
  *
  *Return: A pointer to a listint_t datatype
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode, *temp = *head;
	unsigned int i;

	if (*head == NULL)
		return (NULL);
	if (((size_t)idx) >= listint_len(*head))
		return (NULL);

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;

	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
	}
	else if (idx == 1)
	{
		newnode->next = (*head)->next;
		(*head)->next = newnode;
	}
	else
	{
		for (i = 0; i < idx - 1; i++)
			temp = temp->next;
		newnode->next = temp->next;
		temp->next = newnode;
	}
	return (newnode);
}


/**
  * listint_len - function to print the eelement of a list_int LL
  * @h: A head pointer that  points to the first node
  *
  *Return: len of elements in a typical LL
  */

size_t listint_len(const listint_t *h)
{
	const listint_t *temp = h;
	size_t count = 0;

	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}

	return (count);
}
