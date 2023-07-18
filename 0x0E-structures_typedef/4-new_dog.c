#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
#include <string.h>

/**
*new_dog - function to create new variable of dog_t
*@name: pointer to name of dog
*@age: age of dog
*@owner: owner of dog
*
*Return: pointer to dog_t
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr = malloc(sizeof(dog_t));

	if (ptr == NULL)
		return (NULL);

	ptr->name = malloc(strlen(name) + 1);
	if (ptr->name == NULL)
	{
		free(ptr);
		return (NULL);
	}
	strcpy(ptr->name, name);

	ptr->age = age;

	ptr->owner = malloc(strlen(owner) + 1);
	if(ptr->owner == NULL)
	{
		free(ptr->name);
		free(ptr);
		return (NULL);
	}
	
	strcpy(ptr->owner, owner);

	return (ptr);
}
