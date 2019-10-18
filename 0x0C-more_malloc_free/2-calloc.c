#include "holberton.h"
#include <stdlib.h>
/**
 * _calloc - Entry Point
 * Desc: _calloc function
 * @nmemb: unsigned int type
 * @size: unsigned int type
 * Return: Function that allocates memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		p[i] = 0;
	return (p);
}
