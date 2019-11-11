#include "holberton.h"
#include <stdio.h>
/**
 * get_bit - Entry point
 * Desc: get_bit function
 * @n: unsigned long int
 * @index: unsigned int
 * Return: Function that returns the value of a bit
 **/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (8 * sizeof(unsigned long int) - 1))
		return (-1);
	if (n & (1 << index))
		return (1);
	return (0);
}
