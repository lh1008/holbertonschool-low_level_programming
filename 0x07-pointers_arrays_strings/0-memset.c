#include "holberton.h"
/**
 * _memset - Entry point
 * Desc: _memset
 * @s: char type
 * @b: char type
 * @n: int type
 * Return: char type
 **/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
