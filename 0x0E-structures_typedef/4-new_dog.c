#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

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
	ptr->name = name;
	ptr->age = age;
	ptr->owner = owner;

	return (ptr);
}
