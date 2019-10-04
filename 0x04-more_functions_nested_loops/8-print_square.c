#include "holberton.h"
/**
 * print_square - Entry point
 * Desc: print_square
 * @size: int type
 * Return: Always 0 (Success)
 */
void print_square(int size)
{
	int i = 0, x, y;

	if (i >= size)
		_putchar('\n');
	else
	{
		while (i < size)
		{
			for (x = 0; x < size; x++)
			{
				_putchar('#');
			}
			for (y = 0; x < size; y++)
			{
				_putchar('#');
			}
			_putchar('\n');
			i++;
		}
	}
}
