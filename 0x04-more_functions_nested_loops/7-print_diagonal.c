#include "holberton.h"
/**
 * print_diagonal - Entry point
 * Desc: print_diagonal
 * @n: int type
 * Return: Always 0 (Success)
 */
void print_diagonal(int n)
{
	int x, y;

	if (n <= 0)
		_putchar('\n');
	for (x = 1; x <= n; x++)
	{
		for (y = 1; y < x; y++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
