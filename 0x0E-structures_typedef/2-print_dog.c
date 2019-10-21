#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog - Entry Point
 * Desc: print_dog function
 * @d: dog member type
 * Return: Function that prints a struct dog
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		;
	else
	{

		if (d->name == NULL)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);
		printf("Age: %.6f\n", d->age);
		if (d->owner == NULL)
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}
