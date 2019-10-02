#include "holberton.h"
/**
 * puts2 - Entry point
 * Desc: puts2
 * @str: char type
 */
void puts2(char *str)
{
	int len = 0;

	while (*str != '\0')
	{
		_putchar(*str);
		str += 2;
		len++;
	}
	_putchar('\n');
}
