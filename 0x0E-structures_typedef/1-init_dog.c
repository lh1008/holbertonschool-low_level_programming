#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - Entry Point
 * Desc: init_dog function
 * @d: dog member type
 * @name: char member type
 * @age: float member type
 * @owner: char member type
 * Return: Function that intialize a variable of type struct dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
