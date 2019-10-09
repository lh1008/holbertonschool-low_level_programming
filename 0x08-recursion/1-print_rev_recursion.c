#include "holberton.h"
/**
 * _print_rev_recursion - Entry point
 * Desc: _print_rev_recursion
 * @s: char type
 * Return: A function that prints a string in reverse.
 **/
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
