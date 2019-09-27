#include "holberton.h"
/**
 * print_diagonal - Entry point
 * Desc: print_diagonal
 * @n: int type
 * Return: Always 0 (Success)
 */
void print_diagonal(int n)
{
	int x = 0;

	while (x < n)
	{
		_putchar('\\');
		_putchar('\n');
		x++;
	}
	_putchar('\n');
}
