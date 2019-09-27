#include "holberton.h"
/**
 * print_line - Entry point
 * Desc: print_line
 * @n: int type
 * Return: Always 0 (Success)
 */
void print_line(int n)
{

	int x = 0;

	for (x = 0; x <= n; x++)
	{
		if (n < 0)
		{
			_putchar('\n');
		}
		_putchar('_');
	}
	_putchar(10);
	_putchar(0);
}
