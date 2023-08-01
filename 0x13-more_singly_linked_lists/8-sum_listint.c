#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
  *sum_listint - sum all the nodes in a list
  *@head: The head of the node
  *
  *Return: An integer sum of all the nodes
*/

int sum_listint(listint_t *head)
{
	listint_t *temp = head;
	int count = 0;

	if (head == NULL)
		return (count);

	while (temp->next)
	{
		count += temp->n;
		temp = temp->next;
	}

	count += temp->n;

	return (count);
}
