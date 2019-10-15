#include "holberton.h"
#include <stdlib.h>
/**
 * create_array - Entry point
 * Desc: create_array function
 * @size: unsigned int type
 * @c: char type
 * Return: Print the multiplication
 **/
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *j;

	if (size == 0)
		return (NULL);
	j = malloc(sizeof(char) * size);
	if (j == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		j[i] = c;
	return (j);
}
