#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to the head of the list
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *slow, *fast, *loop;

	if (head == NULL)
		exit(98);

	slow = fast = head;
	loop = NULL;

	/* Find the loop using Floyd's cycle detection algorithm */
	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		{
			loop = slow;
			break;
		}
	}

	/* Print the list until the loop is reached or the end is reached */
	while (head)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		count++;
		if (head == loop)
		{
			/* Move the loop pointer one step ahead and print the rest of the loop */
			loop = loop->next;
			while (loop != head)
			{
				printf("[%p] %d\n", (void *)loop, loop->n);
				count++;
				loop = loop->next;
			}
			/* Print a message indicating the loop and break */
			printf("-> [%p] %d\n", (void *)loop, loop->n);
			break;
		}
		head = head->next;
	}
	return (count);
}

