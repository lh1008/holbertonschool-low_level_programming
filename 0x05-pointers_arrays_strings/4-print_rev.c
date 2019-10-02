#include "holberton.h"
/**
 * print_rev - Entry point
 * Desc: print_rev
 * @s: char type
 * Return: Always 0 (Success)
 */
void print_rev(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		s++;
		length++;
	}
	s--;
	while (length - 1 >= 0)
	{
		_putchar(*s);
		s--;
		length--;
	}
	_putchar('\n');
}
