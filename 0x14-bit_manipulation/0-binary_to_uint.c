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
	int i = 0, sum = 0, x = 1;

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
		sum += ((b[i - 1] - 48) * x);
		x = x * 2;
		i--;
	}
	return (sum);
}
