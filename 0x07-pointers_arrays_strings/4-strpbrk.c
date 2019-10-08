#include "holberton.h"
/**
* _strpbrk - Entry point
* Desc: _strpbrk search a string
* @s: char type
* @accept: char type
* Return: Function that searches a string for any of a set of bytes
**/
char *_strpbrk(char *s, char *accept)
{
	int i = 0, x = 0;

	while (s[i] != '\0')
	{
		while (accept[x] != '\0')
		{
			if (s[i] == accept[x])
			return (s + i);
			x++;
		}
		x = 0;
		i++;
	}
	return ('\0');
}
