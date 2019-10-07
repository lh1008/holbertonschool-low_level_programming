#include "holberton.h"
/**
 * *_strchr - Entry point
 * Desc: *_strchr function
 * @s: char type
 * @c: char type
 * Return: character in a string
 **/
char *_strchr(char *s, char c)
{
	int i = 0;

	while (i != '0')
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		i++;
	}
	return ('\0');
}
