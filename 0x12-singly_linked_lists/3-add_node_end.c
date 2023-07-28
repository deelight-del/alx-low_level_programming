#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
  *add_node_end - adds new node to the end of the list
  *@head: pointer to pointer that holds a list_t data type
  *@str: string to add to node
  *
  *str: const char string, new string added as new node
  *Return: A pointer to list_t data type
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *current, *temp = malloc(sizeof(list_t));

	if (temp == NULL)
		return (NULL);

	if (*head == NULL)
	{
		(*head) = malloc(sizeof(list_t));
		(*head)->str = strdup(str);
		(*head)->len = strlen(str);
		(*head)->next = NULL;
		return (*head);
	}

	current = *head;

	temp->str = strdup(str);
	if (!temp->str)
	{
		free(temp->str);
		free(temp);
		return (*head);
	}
	temp->len = strlen(str);
	temp->next = NULL;

	while (current->next)
	{
		current = current->next;
	}

	current->next = temp;

	return (*head);
}
