#include "holberton.h"
/**
 * times_table - Entry point
 * Desc: times_table
 * Return: Always 0 (Success)
 */
void times_table(void)
{
	int x = 0, y, i;

	while (x <= 9)
	{
		for (y = 0; y <= x; y++)
		{
			i = x * y;
			if (i < 10)
			{
				_putchar(i + '0');
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else if (i >= 10)
			{
				_putchar(i / 10 + '0');
				_putchar(i % 10 + '0');
				_putchar(',');
				_putchar(' ');
			}
			/*
			 *			if (i >= 10)
			 *			{
			 *	_putchar(i / 10 + '0');
			 *	_putchar(i % 10 + '0');
			 *	}
			*/
		}
		_putchar('\n');
		x++;
	}
}
