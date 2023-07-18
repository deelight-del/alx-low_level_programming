#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
*free_dog - frees pointer to struct dog
*@d: pointer to struct dog variable
*
*Return: void
*/

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
