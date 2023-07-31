#include <stdio.h>
#include "lists.h"
#include <stddef.h>

/**
  * print_listint - function to print the eelement of a list_int LL
  * @h: A head pointer that  points to the first node
  *
  *Return: len of elements in a typical LL
  */

size_t print_listint(const listint_t *h)
{
	const listint_t *temp = h;
	size_t count = 0;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		count++;
		temp = temp->next;
	}

	return (count);
}
