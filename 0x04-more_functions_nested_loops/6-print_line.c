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

	while (x < n)
	{
		_putchar('_');
		x++;
	}
	_putchar('\n');
}
