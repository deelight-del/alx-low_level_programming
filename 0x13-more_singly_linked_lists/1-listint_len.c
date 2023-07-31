#include <stdio.h>
#include "lists.h"
#include <stddef.h>

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
