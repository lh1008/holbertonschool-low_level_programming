#include "holberton.h"
/**
 * print_triangle - Entry point
 * Desc: print_triangle
 * @size: int type
 */
void print_triangle(int size)
{
	int i, x, y;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (x = i; x < size; x++)
				_putchar(' ');
			for (y = size - i; y < size; y++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
