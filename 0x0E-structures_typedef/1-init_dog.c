#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
*init_dog - initializes dog with variables
*@d: pointer to struct dog
*@name: name of the dog
*@age: age of dog
*@owner: owner of dog
*
*Return: pointer to variable dog
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));

	d->name = name;
	d->age = age;
	d->owner = owner;
}
