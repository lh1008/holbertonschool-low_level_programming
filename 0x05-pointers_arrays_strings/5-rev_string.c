#include "holberton.h"
/**
 * rev_string - Entry point
 * Desc: rev_string function
 * @s: char type
 * Return: Function that reverses a string
 **/
void rev_string(char *s)
{
	int counter = 0;

	while (s[counter] != '\0')
	{
		_putchar(s[counter]);
		counter++;
	}
	_putchar('\n');
	counter--;
	while (s[counter - 1] >= 0)
	{
		_putchar(s[counter]);
		counter--;
	}
	_putchar('\n');
}
