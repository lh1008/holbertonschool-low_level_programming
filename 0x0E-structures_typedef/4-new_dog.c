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
	int n_l = 0, o_l = 0;

	if (name == NULL && owner == NULL)
		return (NULL);

	size = malloc(sizeof(struct dog));
	if (size == NULL)
	{
		free(size);
		return (NULL);
	}

	while (name[n_l] != '\0')
		n_l++;

	box_name = malloc(sizeof(char) * (n_l + 1));
	if (box_name == NULL)
	{
		free(size);
		return (NULL);
	}

	while (owner[o_l] != '\0')
		o_l++;

	box_owner = malloc(sizeof(char) * (o_l + 1));
	if (box_owner == NULL)
	{
		free(size);
		free(box_name);
		return (NULL);
	}
	for (n_l = 0; name[n_l] != '\0'; n_l++)
		box_name[n_l] = name[n_l];
	for (o_l = 0; owner[o_l] != '\0'; o_l++)
		box_owner[o_l] = owner[o_l];

	size->name = box_name;
	size->age = age;
	size->owner = box_owner;
	return (size);
}
