#include "holberton.h"
#include <stdlib.h>
/**
 * malloc_checked - Entry Point
 * Desc: malloc_checked function
 * @b: unsigned int
 * Return: Function that allocates memory using malloc
 */
void *malloc_checked(unsigned int b)
{
	int *f;

	f = malloc(b);

	if (f == NULL)
		exit(98);
	return (f);
}
