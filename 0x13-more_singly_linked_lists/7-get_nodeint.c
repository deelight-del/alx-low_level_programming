#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
  *get_nodeint_at_index - Returns the node at a specific
  *@head: head node of the given Linkedlist
  *@index: index of node to be found
  *
  *Return: A pointer to the listint_t type
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp, *previous;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	temp = head;
	previous = temp;

	while (i <= index)
	{
		if ((i == index) && (temp->next == NULL))
		{
			return (temp);
		}
		if (temp->next == NULL)
			return (NULL);
		previous = temp;
		temp = temp->next;
		i++;
	}
	return (previous);
}
