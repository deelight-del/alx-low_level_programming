#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
  *delete_nodeint_at_index - used to delete node at index n
  *@head: Address of head node
  *@index: index where to delete the node from
  *
  *Return: 1 if it succedes, or -1 if it doesn't
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *prev;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index >= listint_len(*head))
		return (-1);
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	temp = *head;
	while (i < index)
	{
		prev = temp;
		temp = temp->next;
		i++;
	}
	prev->next = temp->next;
	free(temp);
	return (1);

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
