#include "holberton.h"
/**
 * print_most_numbers - Continue point
 * Desc: print_most_numbers
 * Return: Always 0 (Success)
 */
void print_most_numbers(void)
{

	int x;

	for (x = 0; x <= 9; x++)
	{
		if (x != 2 && x != 4)
		{
			_putchar(x + 48);
		}
	}
	_putchar(10);
}
