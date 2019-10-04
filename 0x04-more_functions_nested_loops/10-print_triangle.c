#include "holberton.h"
/**
 * print_triangle - Entry point
 * Desc: print_triangle
 * @size: int type
 */
void print_triangle(int size)
{
	int i = 0, x, y;

	if (i >= size)
		_putchar('\n');
	else
	{
		while (i < size)
		{
			for (x = 0; x <= size; x++)
			{
				_putchar('#');
			}
			_putchar('\n');
			i++;
		}
	}
}
