#include "holberton.h"
/**
 * _strspn - Entry point
 * Desc: _strspn
 * @s: char type
 * @accept: char type
 * Return: lenght of a prefix susbtring
 **/
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, x = 0, y = 0;

	while (s[i] != ' ')
	{
		while (accept[x] != '0')
		{
			if (s[i] != accept[x])
				x++;
			break;
		}
		i++;
		y++;
	}
	return (y - 1);
}
