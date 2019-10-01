#include "holberton.h"
/**
 * _strlen - Entry point
 * Desc: _strlen
 * @s: char type
 * Return: Always 0 (Success)
 */
int _strlen(char *s)
{
	int x = 0;

	while (*s != 0)
	{
		s++;
		x++;
	}
	return (x);
}
