#include "holberton.h"
#include <stdio.h>
/**
 * set_bit - Entry point
 * Desc: set_bit function
 * @n: unsigned lont int
 * @index: insigned int
 * Return: Function that set the value of a bit to 1
 **/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (8 * sizeof(unsigned int)))
		return (-1);
	unsigned long int mask = 1;

	mask = mask << index;
	*n = *n | mask;
	return (1);
}
