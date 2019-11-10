#include "holberton.h"
#include <stdio.h>
/**
 * print_binary - Entry point
 * Desc: print_binary function
 * @n: unsigned long int
 * Return: Function that prints binary representation.
 **/
void print_binary(unsigned long int n)
{
	unsigned long int mask;

	mask = (8 * sizeof(unsigned long int)) << 31;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n == 1)
	{
		_putchar('1');
		return;
	}
	while (mask > 0)
	{
		if (mask & n)
			_putchar('1');
		else
			_putchar('0');
		mask = mask >> 1;
	}
}
