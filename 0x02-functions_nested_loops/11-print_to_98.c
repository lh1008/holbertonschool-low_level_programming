#include "holberton.h"
/**
 * print_to_98 - Entry point
 * Desc: print_to_98
 * @n: int type
 * Return: Always 0 (Success)
 */
void print_to_98(int n)
{
	for (n = 0; n <= 98; n++)
	{
		if (n < 10)
		{
			_putchar(n + '0');
		}
		if (n >= 10)
		{
			_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
		}
		/*
		 *		_putchar(n + '0');
		 */
		if (n != 98)
		{
		_putchar(',');
		_putchar(' ');
		}
	}
	_putchar('\n');
}
