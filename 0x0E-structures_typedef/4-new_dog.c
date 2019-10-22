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

	size = malloc(sizeof(struct dog));
	if (size == NULL)
		return (NULL);
	size->name = name;
	size->age = age;
	size->owner = owner;
	return (size);
}
