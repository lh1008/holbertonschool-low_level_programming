#include "holberton.h"
/**
 * _puts - Entry point
 * Desc: _puts
 * @str: char type
 * Return: Always 0 (Success)
 */
void _puts(char *str)
{

	while (*str != 0)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
