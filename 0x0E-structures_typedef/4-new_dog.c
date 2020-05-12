#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * new_dog - Entry Point
 * Desc: new_dog function
 * @name: name member type
 * @age: age member type
 * @owner: owner member type
 * Return: Function that creates a new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *size;
	char *box_name, *box_owner;

	if (name == NULL && owner == NULL)
		return (NULL);

	size = malloc(sizeof(struct dog));
	if (size == NULL)
	{
		free(size);
		return (NULL);
	}

	box_name = malloc(sizeof(char *name));
	if (box_name == NULL)
	{
		free(size);
		return (NULL);
	}

	box_owner = malloc(sizeof(char *owner));
	if (box_owner == NULL)
	{
		free(size);
		free(box_name);
		return (NULL);
	}

	size->name = name;
	size->age = age;
	size->owner = owner;
	return (size);
}
