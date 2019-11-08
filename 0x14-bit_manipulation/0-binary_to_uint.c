#include "holberton.h"
#include <stdio.h>
/**
 * binary_to_uint - Entry point
 * Desc: binary_to_uint function
 * @b: pointer to const char
 * Return: Function that converts a binary number to an unsigned int
 **/
unsigned int binary_to_uint(const char *b)
{
	int i = 0, rem, sum = 0, x = 0;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		i++;
	}
	while (i > 0)
	{
		rem = i % 10;
		sum += rem * _power(2, x);
		i = i / 10;
		i--;
	}

	return (sum);
}
