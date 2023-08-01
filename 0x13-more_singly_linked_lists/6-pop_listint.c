#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
  *pop_listint - function to pop list and return a value n
  *@head: address of the pointer to head node
  *
  *Return: an integer, which is n of the head node
  */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int value;

	if (*head == NULL)
		return (0);

	value = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (value);
}
