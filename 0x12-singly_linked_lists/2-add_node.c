#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
  *add_node - function to add node to existing link
  *@head: pointer to a pointer that points to a list_t(node)
  *@str: new string to add newly created note
  *
  *Return: a pointer to list_t
*/

list_t *add_node(list_t **head, const char *str)
{

	list_t *temp;
	temp = malloc(sizeof(list_t));

	/*if (temp == NULL)
		return (*head);

	if (head == NULL)
	{
		head = temp;
	}*/

	temp->next = (*head);
	temp->len = strlen(str);
	temp->str = strdup(str);

	(*head) = temp;

	return (*head);
}
