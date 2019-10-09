#include "holberton.h"
/**
 * _strlen_recursion - Entry point
 * Desc: _strlen_recursion
 * @s: char type
 * Return: Function that returns the length of a string.
 **/
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
