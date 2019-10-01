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
		for (y = 0; y <= 9; y++)
		{
			if (y > 0 && i <= 9)
			{
				_putchar(' ');
			}
			i = x * y;
			if (i < 10 && i <= 9)
			{
				_putchar(i + '0');
			}
			else
			{
				_putchar(i / 10 + '0');
				_putchar(i % 10 + '0');
			}
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
		x++;
	}
}
