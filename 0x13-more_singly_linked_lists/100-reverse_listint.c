#include <stdio.h>
#include "lists.h"

/**
  *reverse_listint - function to reverse a linked list
  *@head: head to the actual list
  *
  *Return: A pointer to the reversed linked list
  */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *next = *head;

	while (*head != NULL)
	{
		next = next->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;

	return (*head);
}
