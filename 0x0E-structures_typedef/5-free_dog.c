#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * new_dog - Entry Point
 * Desc: new_dog function
 * @d: dog_t pointer type
 * Return: Function that frees dog
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
	return;
}
