#include "holberton.h"
/**
 * _puts_recursion - Entry point
 * Desc: _puts_recursion void type
 * @s: char type
 * Return: Print a string followed by a new line using recursion
 **/
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
